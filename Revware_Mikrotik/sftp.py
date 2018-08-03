import ssh
import paramiko
import time
import ping
import routeros_api
from PyQt5 import QtCore


class SFTP(QtCore.QObject):

	printToScreen = QtCore.pyqtSignal(str)
	setcelltextsignal = QtCore.pyqtSignal(int, int, str)
	setcellcolorsignal = QtCore.pyqtSignal(int, int, str)
	addrowsignal = QtCore.pyqtSignal()
	clearsignal = QtCore.pyqtSignal()

	progressSignal = QtCore.pyqtSignal(int)
	pMaxSignal = QtCore.pyqtSignal(int)
	pCloseSignal = QtCore.pyqtSignal()


	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

		self.printToScreen.connect(parent.parent().gui.update_status)
		self.setcelltextsignal.connect(parent.parent().swindow.set_cell)
		self.setcellcolorsignal.connect(parent.parent().swindow.set_cell_color)
		self.addrowsignal.connect(parent.parent().swindow.add_row)
		self.clearsignal.connect(parent.parent().swindow.clear)

		self.progressSignal.connect(parent.parent().progresswindow.update_progress)
		self.pMaxSignal.connect(parent.parent().progresswindow.set_max)
		self.pCloseSignal.connect(parent.parent().progresswindow.close)

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
				self.setcelltextsignal.emit(i, 3, '')
				self.setcellcolorsignal.emit(i, 3, 'green')
				self.indexesonline.append(i)
				self.tried = False
				self.get_variables(i)

			else:
				self.setcelltextsignal.emit(i, 3, '')
				self.setcellcolorsignal.emit(i, 3, 'red')

	def get_variables(self, i):
		try:
			connection = routeros_api.RouterOsApiPool(self.ips[i], username=self.uname, password=self.password)
			api = connection.get_api()

			self.identity = api.get_resource('/system/identity')
			self.filter = self.identity.get()
			self.setcelltextsignal.emit(i, 1, self.filter[0]['name'])

			self.version = api.get_resource('/system/resource')
			self.filter = self.version.get()
			self.setcelltextsignal.emit(i, 2, self.filter[0]['version'])

		except routeros_api.exceptions.RouterOsApiConnectionError:
			if self.tried:
				self.setcelltextsignal.emit(i, 4, 'FAILED')
				self.indexesonline.pop()
				return None

			self.printToScreen.emit("Could not establish API connection")
			self.printToScreen.emit("Attempting to enable API through Telnet")
			self.parent().tel.telnet(self.ips[i], self.uname, self.password, "api")
			self.tried = True
			self.get_variables(i)

	def batchsftp(self, username, password, cfile, ifile, reboot):

		self.uname = username
		self.password = password

		self.get_ips(ifile)
		self.table_setup()

		print(self.indexesonline)
		while 1:
			pass

		for i in range(len(self.ips)):

			self.batchsftp2(username, password, self.ips[i], cfile)
			if reboot == 'Y' or reboot == 'y':
				ssh.ssh(self.ips[i], username, password, 'system reboot')

		if reboot == 'Y' or reboot == 'y':
			print('\n\n')
			if len(self.ips) < 5:  # avoids an issue where the radios are pinged before they shut down for short ip lists
				time.sleep(4)
			print('Checking for rebooted machines')
			for i in range(len(self.ips)):
				print("Waiting.", end='')
				ping.ping(self.ips[i])

	def batchsftp2(self, username, password, ip, cfile):
		transport = paramiko.Transport(ip, 22)
		transport.connect(username=username, password=password)
		sftp = paramiko.SFTPClient.from_transport(transport)
		filepath = '/batch.bat'
		print("Uploading file...")
		sftp.put(cfile, filepath, callback=self.parent().sshc.transfer)
		print("DONE: File Uploaded")
		self.parent().sshc.ssh(ip, username, password, mikrotik_command='/import batch.bat')

		sftp.close()
		transport.close()

	def filecallback(self):   # callback function that does nothing
		pass


	def batchfirmware(self, username, password, cfile, ifile, reboot):
		self.uname = username
		self.password = password
		print("yeet")
		self.get_ips(ifile)
		self.table_setup()

		print(self.indexesonline)

		for i in self.indexesonline:
			self.tried = False
			self.batchfirmware2(username, password, self.ips[i], cfile)
			self.parent().sshc.ssh(self.ips[i], username, password, 'system reboot')

			self.setcelltextsignal.emit(i, 3, '')
			self.setcellcolorsignal.emit(i, 3, 'red')

			print('\n\n')
			if len(self.ips) < 5:  # avoids an issue where the radios are pinged before they shut down for short ip lists
				time.sleep(4)
			print('Checking for rebooted machines')
		for j in self.indexesonline:
				print("Waiting.", end='')
				if self.parent().ping.ping(self.ips[j], 50, True) == "online":
					self.setcelltextsignal.emit(j, 3, '')
					self.setcellcolorsignal.emit(j, 3, 'green')

	def batchfirmware2(self, username, password, ip, cfile):

		try:

			transport = paramiko.Transport(ip, 22)
			transport.connect(username=username, password=password)
			sftp = paramiko.SFTPClient.from_transport(transport)
			filepath = '/routeros-mipsbe-6.39.1.npk'
			print("Uploading file...")
			self.parent().parent().progresswindow.show()
			sftp.put(cfile, filepath, callback=self.parent().sshc.transfer)
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
			self.batchfirmware2(username, password, ip, cfile)

