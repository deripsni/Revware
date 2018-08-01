import ping
import ssh
import telnet
import time
import sys
import sftp
import routeros_api
from PyQt5 import QtCore


class Firmware(QtCore.QThread):

	def __init__(self, ip_input, username_input, password_input, filepath, parent=None):
		super(self.__class__, self).__init__(parent)
		print("Firmware Thread Initialized")
		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input
		self.filepath = filepath
		self.create_ssh()

	def run(self):
		print("Firmware")
		self.sshc.firmwaresftp(self.localip, self.localu, self.localp, self.filepath)
		print("made it to the reboot")
		self.sshc.ssh(self.localip, self.localu, self.localp, "system reboot")
		print("made it to the flush")
		sys.stdout.flush()
		time.sleep(10)
		self.ip.ping(self.localip, 50, True)

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)
		self.tel = telnet.Telnet(parent=self)
		self.ip = ping.IPTest(parent=self)


class Password(QtCore.QThread):
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, ip_input, username_input, password_input, n_password, c_password, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input
		self.n_password = n_password
		self.c_password = c_password
		self.create_ssh()

	@QtCore.pyqtSlot(str, str, str)
	def run(self):
		print("Password")
		if self.n_password == self.c_password:
			self.command = "user set admin password=" + self.n_password
			self.sshc.ssh(self.localip, self.localu, self.localp, self.command)
		else:
			self.printToScreen.emit("Passwords do not match")

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)
		self.tel = telnet.Telnet(parent=self)


class Firewall(QtCore.QThread):
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, ip_input, username_input, password_input, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input
		self.create_ssh()

	def run(self):
		print("Drop Rule Check")
		# self.sshc.ssh(self.localip, self.localu, self.localp, "ip firewall filter print")
		try:
			connection = routeros_api.RouterOsApiPool(self.localip, username=self.localu, password=self.localp)
			api = connection.get_api()
			self.list = api.get_resource('/ip/firewall/filter')
			self.filter = self.list.get()
		# print(self.filter[2])
			self.index = -1
			self.dropindex = None
			for i in self.filter:
				self.index = self.index + 1
				if i['action'] == 'drop' and i['disabled'] == 'false':
					self.dropindex = self.index
			if self.index == self.dropindex:
				self.printToScreen.emit("Drop rule is enabled")
			else:
				self.printToScreen.emit("Drop rule is not enabled")
				self.printToScreen.emit("Adding drop rule...")
				self.list.add(action="drop", chain='forward', disabled='false')
				self.run()
		except routeros_api.exceptions.RouterOsApiConnectionError:
			self.printToScreen.emit("Could not establish API connection")
			self.printToScreen.emit("Attempting to enable API through Telnet")
			self.tel.telnet(self.localip, self.localu, self.localp, "api")
			self.run()

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)
		self.tel = telnet.Telnet(parent=self)

class DeviceName(QtCore.QThread):
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, ip_input, username_input, password_input, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input
		self.create_ssh()

	@QtCore.pyqtSlot(str, str, str)
	def run(self):
		print("Device Name")

		try:
			connection = routeros_api.RouterOsApiPool(self.localip, username=self.localu, password=self.localp)
			api = connection.get_api()
			self.list = api.get_resource('/system/identity')
			self.filter = self.list.get()
			self.printToScreen.emit('Name: ' + self.filter[0]['name'])
		except routeros_api.exceptions.RouterOsApiConnectionError:
			self.printToScreen.emit("Could not establish API connection")
			self.printToScreen.emit("Attempting to enable API through Telnet")
			self.tel.telnet(self.localip, self.localu, self.localp, "api")
			self.run()

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)
		self.tel = telnet.Telnet(parent=self)


class CustomCommand(QtCore.QThread):
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, ip_input, username_input, password_input, command, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input
		self.command = command
		self.create_ssh()

	def run(self):
		print("Custom Command")
		self.sshc.ssh(self.localip, self.localu, self.localp, self.command)
		self.printToScreen.emit("Command Sent")

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)
		self.tel = telnet.Telnet(parent=self)


class BatchSFTP(QtCore.QThread):
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, username_input, password_input, cfile, ifile, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.localu = username_input
		self.localp = password_input
		self.cmdFile = cfile
		self.ipFile = ifile
		self.create_ssh()

	@QtCore.pyqtSlot(str, str)
	def run(self):
		print("Batch SFTP")

		self.mysftp.batchsftp(username=self.localu, password=self.localp, cfile=self.cmdFile, ifile=self.ipFile,
								reboot='yes')

	def create_ssh(self):
		self.mysftp = sftp.SFTP(parent=self)
		self.sshc = ssh.SSHConnection(parent=self)
		self.tel = telnet.Telnet(parent=self)


class Telnet(QtCore.QThread):
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, ip_input, username_input, password_input, method, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input
		self.method = method
		self.tel = telnet.Telnet(parent=self)

	@QtCore.pyqtSlot(str, str, str)
	def run(self):
		print("Telnet")
		self.tel.telnet(self.localip, self.localu, self.localp, self.method)


class Mikrotik(QtCore.QThread):
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, ip_input, subnet, to, parent=None):
		super(self.__class__, self).__init__(parent)
		self.localip = ip_input
		self.subnet = subnet
		self.to = to
		self.printToScreen.connect(self.parent().gui.update_status)
		self.ip = ping.IPTest(parent=self)

	def run(self):
		print("Password")
		self.ip.mikrotik_checker(self.localip, self.subnet, self.to)
