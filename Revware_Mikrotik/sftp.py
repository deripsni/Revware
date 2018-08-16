import ssh
import paramiko
import time
import ping
import routeros_api
from PyQt5 import QtCore
from PyQt5 import QtWidgets


class SFTP(QtCore.QObject):

	printToScreen = QtCore.pyqtSignal(str)
	setcelltextsignal = QtCore.pyqtSignal(int, int, str)
	setcellcolorsignal = QtCore.pyqtSignal(int, int, str)
	setcellwidgetsignal = QtCore.pyqtSignal(int, int, QtWidgets.QWidget)
	addrowsignal = QtCore.pyqtSignal()
	clearsignal = QtCore.pyqtSignal()

	progressSignal = QtCore.pyqtSignal(int)
	pMaxSignal = QtCore.pyqtSignal(int)
	pCloseSignal = QtCore.pyqtSignal()

	openfexecutewindow = QtCore.pyqtSignal()
	openpexecutewindow = QtCore.pyqtSignal()
	openaexecutewindow = QtCore.pyqtSignal()

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

		self.printToScreen.connect(parent.parent().gui.update_status)
		self.setcelltextsignal.connect(parent.parent().swindow.set_cell)
		self.setcellcolorsignal.connect(parent.parent().swindow.set_cell_color)
		self.setcellwidgetsignal.connect(parent.parent().swindow.set_cell_widget)
		self.addrowsignal.connect(parent.parent().swindow.add_row)
		self.clearsignal.connect(parent.parent().swindow.clear)

		self.progressSignal.connect(parent.parent().progresswindow.update_progress)
		self.pMaxSignal.connect(parent.parent().progresswindow.set_max)
		self.pCloseSignal.connect(parent.parent().progresswindow.close)

		self.openfexecutewindow.connect(parent.parent().batchfirmwareexecutewindow.show)
		self.openpexecutewindow.connect(parent.parent().batchpasswordexecutewindow.show)
		self.openaexecutewindow.connect(parent.parent().batchfirewallexecutewindow.show)

	def get_ips(self, ifile):
		with open(ifile, 'r') as infile:
			self.ips = infile.read().splitlines()

	def table_setup(self):

		self.clearsignal.emit()
		self.indexesonline = []

		for i in range(len(self.ips)):

			self.addrowsignal.emit()
			self.setcelltextsignal.emit(i, 0, self.ips[i])

		for i in range(len(self.ips)):

			if self.parent().ping.ping(self.ips[i], 1, False) == 'online':
				self.setcelltextsignal.emit(i, 4, 'Yes')
				self.setcellcolorsignal.emit(i, 4, 'green')
				self.indexesonline.append(i)
				self.tried = False
				self.get_variables(i)

			else:
				self.setcelltextsignal.emit(i, 4, 'No')
				self.setcellcolorsignal.emit(i, 4, 'red')
				self.setcelltextsignal.emit(i, 5, 'Offline')

	def get_variables(self, i):
		try:
			# self.printToScreen.emit("Trying to get the variables")
			connection = routeros_api.RouterOsApiPool(self.ips[i], username=self.uname, password=self.password)
			api = connection.get_api()

			self.identity = api.get_resource('/system/identity')
			self.filter = self.identity.get()
			self.setcelltextsignal.emit(i, 1, self.filter[0]['name'])

			self.version = api.get_resource('/system/resource')
			self.filter = self.version.get()
			self.setcelltextsignal.emit(i, 2, self.filter[0]['version'])

			self.architecture = api.get_resource('/system/resource')
			self.filter = self.version.get()
			self.setcelltextsignal.emit(i, 3, self.filter[0]['architecture-name'])

			return None

		except routeros_api.exceptions.RouterOsApiConnectionError:
			if self.tried:
				self.setcelltextsignal.emit(i, 5, 'Failed')
				self.indexesonline.pop()
				return None
			else:
				self.printToScreen.emit("Could not establish API connection")
				self.printToScreen.emit("Attempting to enable API through SSH")
				self.parent().sshc.enable_api(self.ips[i], self.uname, self.password, attempts=0)
				self.printToScreen.emit("made it back to here")
				self.tried = True
				time.sleep(0.5)
				self.get_variables(i)
		except routeros_api.exceptions.RouterOsApiCommunicationError:

			print("Communication Error")

	def filecallback(self):   # callback function that does nothing
		pass

	def setup_batchfirmware(self, username, password, ifile):
		self.uname = username
		self.password = password
		print("yeet")
		self.get_ips(ifile)
		self.table_setup()
		self.openfexecutewindow.emit()
		print("Showed the Execute")

	def batchfirmware(self, username, password, cfile):

		print(self.indexesonline)

		self.count = 0

		for i in self.indexesonline:
			self.tried = False
			self.count = self.count + 1
			self.batchfirmware2(username, password, self.ips[i], cfile, i)
			self.parent().sshc.ssh(self.ips[i], username, password, 'system reboot')
			self.setcelltextsignal.emit(i, 5, 'Rebooting...')
			self.setcelltextsignal.emit(i, 4, 'No')
			self.setcellcolorsignal.emit(i, 4, 'red')
			if self.count == 2:
				self.batch_ping_thread = PingMachines(self.indexesonline, self.ips, parent=self)
				self.batch_ping_thread.start()
		self.uploading = None

	def batchfirmware2(self, username, password, ip, cfile, i):

		self.uploading = i

		try:

			transport = paramiko.Transport(ip, 22)
			transport.connect(username=username, password=password)
			sftp = paramiko.SFTPClient.from_transport(transport)
			filepath = '/routeros-mipsbe-6.39.1.npk'
			print("Uploading file...")
			self.setcelltextsignal.emit(i, 5, 'Uploading...')
			self.currentindex = i
			sftp.put(cfile, filepath, callback=self.transfer)
			# self.batch_print_progress(self.transferred, self.to_transfer, i)
			print("DONE: File Uploaded")
			sftp.close()
			transport.close()

		except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):
			if self.tried:
				return None
			self.printToScreen.emit("Could not establish an SSH connection")
			self.printToScreen.emit("Attempting to enable SSH through Telnet")
			self.parent().tel.telnet(ip, username, password, "ssh")
			self.tried = True
			self.batchfirmware2(username, password, ip, cfile, i)

	def setup_batchpassword(self, username, password, ifile):
		self.uname = username
		self.password = password
		print("yeet")
		self.get_ips(ifile)
		self.table_setup()
		self.openpexecutewindow.emit()
		print("Showed the Execute")

	def batchpassword(self, username, password, command):

		print(self.indexesonline)
		self.command = command
		self.count = 0

		for i in self.indexesonline:
			self.tried = False
			self.count = self.count + 1

			self.parent().sshc.ssh(self.ips[i], username, password, command)
			self.setcelltextsignal.emit(i, 5, 'Command Sent')
			# self.batchpassword2(username, password, self.ips[i], cfile, i)
			# self.printToScreen.emit("Password changed")

		self.printToScreen.emit("Verifying Passwords")

		for i in self.indexesonline:
			try:
				self.parent().sshc.ssh(self.ips[i], username, self.parent().p1, "")
				self.setcelltextsignal.emit(i, 5, 'Verified')
			except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.AuthenticationException):
				self.setcelltextsignal.emit(i, 5, 'Failed')
		self.uploading = None

	def setup_batchfirewall(self, username, password, ifile):
		self.uname = username
		self.password = password
		print("yeet")
		self.get_ips(ifile)
		self.table_setup()
		self.openaexecutewindow.emit()
		print("Showed the Execute")

	def batchfirewall(self, username, password):

		print(self.indexesonline)
		self.count = 0

		for i in self.indexesonline:
			self.checkfirewall(username, password, i)

	def checkfirewall(self, username, password, ip):
		try:
			connection = routeros_api.RouterOsApiPool(self.ips[ip], username=username, password=password)
			self.errormessage = (
								"U: " + username + " P: " + password + " IP: " + str(ip) + " Also IP: " +
								str(self.indexesonline[ip]))

			self.printToScreen.emit(self.errormessage)
			api = connection.get_api()
			self.list = api.get_resource('/ip/firewall/filter')
			self.filter = self.list.get()
			# print(self.filter[2])
			self.index = -1
			self.dropindex = None

			for j in self.filter:
				self.index = self.index + 1
				if j['action'] == 'drop' and j['disabled'] == 'false':
					self.dropindex = self.index

			if self.index == self.dropindex:
				self.printToScreen.emit("Drop rule is enabled")
				self.setcelltextsignal.emit(ip, 5, 'Enabled')
			else:
				self.printToScreen.emit("Drop rule is not enabled")
				self.setcelltextsignal.emit(ip, 5, 'Not Enabled')
				self.printToScreen.emit("Adding drop rule...")
				self.setcelltextsignal.emit(ip, 5, 'Enabling')
				self.list.add(action="drop", chain='forward', disabled='false')
				self.checkfirewall(username, password, ip)

		except routeros_api.exceptions.RouterOsApiConnectionError:
			self.printToScreen.emit("Could not establish API connection")
			self.printToScreen.emit("Attempting to enable API through Telnet")
			self.tel.telnet(self.localip, self.localu, self.localp, "api")
			self.checkfirewall(username, password, ip)

	def transfer(self, transferred, to_transfer):
		self.transferred = transferred
		self.to_transfer = to_transfer
		self.batch_print_progress(self.transferred, self.to_transfer, self.currentindex, dec=0)

	def batch_print_progress(self, iteration, total, index, dec=2):
		percent = ("{0:." + str(dec) + "f}").format(100 * (iteration / float(total)))
		string = percent + "%"
		self.setcelltextsignal.emit(index, 5, string)


class PingMachines(QtCore.QThread):

	setcelltextsignal = QtCore.pyqtSignal(int, int, str)
	setcellcolorsignal = QtCore.pyqtSignal(int, int, str)
	setcellwidgetsignal = QtCore.pyqtSignal(int, int, QtWidgets.QWidget)

	def __init__(self, indexesonline, ips, parent=None):
		super(self.__class__, self).__init__(parent)
		self.indexesonline = indexesonline
		self.ips = ips
		self.ping = parent.parent().ping
		self.parent = parent

		# self.printToScreen.connect(parent.parent.parent().gui.update_status)
		self.setcelltextsignal.connect(parent.parent().parent().swindow.set_cell)
		self.setcellcolorsignal.connect(parent.parent().parent().swindow.set_cell_color)
		self.setcellwidgetsignal.connect(parent.parent().parent().swindow.set_cell_widget)

		print("My parent is")
		print(parent)
		print("Their parent is")
		print(parent.parent())
		print("Their ping is")
		print(parent.parent().ping)

	def run(self):
		for j in self.indexesonline:
			time.sleep(1)

			print("pinging this ip: " + self.ips[j] + "at index" + str(j))

			if hasattr(self.parent, 'uploading'):
				while j == self.parent.uploading:
					pass

			time.sleep(10)
			print("Waiting.", end='')
			if self.ping.ping(self.ips[j], 50, True) == "online":
				self.setcelltextsignal.emit(j, 5, 'Done')
				self.setcelltextsignal.emit(j, 4, 'Yes')
				self.setcellcolorsignal.emit(j, 4, 'green')
				time.sleep(2)
				self.parent.get_variables(j)
