import ping
import ssh
import telnet
import time
import sys
import sftp
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
		print("Firewall")
		self.sshc.ssh(self.localip, self.localu, self.localp, "ip firewall filter print")

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)


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

		self.sshc.ssh(self.localip, self.localu, self.localp, "system identity print")

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)


class CustomCommand(QtCore.QObject):
	printToScreen = QtCore.pyqtSignal(str)
	sshSignal = QtCore.pyqtSignal(str, str, str, str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.create_ssh()

	@QtCore.pyqtSlot(str, str, str)
	def run_custom_command(self, ip_input, username_input, password_input):
		print("Custom Command")
		print(ip_input + username_input, password_input)

		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)
		self.sshSignal.connect(self.sshc.ssh)

	@QtCore.pyqtSlot(str)
	def set_command(self, cmd):
		self.command = cmd
		self.sshSignal.emit(self.localip, self.localu, self.localp, self.command)
		self.printToScreen.emit("Command Sent")


class BatchSFTP(QtCore.QObject):
	signalStatus = QtCore.pyqtSignal()
	firmwaresftpSignal = QtCore.pyqtSignal(str, str, str)
	sshSignal = QtCore.pyqtSignal(str, str, str, str)
	pingSignal = QtCore.pyqtSignal(str, int, bool)
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.create_ssh()

	@QtCore.pyqtSlot(str, str)
	def run_batch_sftp(self, username_input, password_input):
		print("Batch SFTP")
		print(username_input, password_input)

		self.localu = username_input
		self.localp = password_input

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)

		self.sshSignal.connect(self.sshc.ssh)
		self.ip = ping.IPTest(parent=self)
		self.pingSignal.connect(self.ip.ping)
		self.mysftp = sftp.SFTP(parent=self)

	@QtCore.pyqtSlot(str, str)
	def set_batch_sftp(self, cfile, ifile):
		self.cmdFile = cfile
		self.ipFile = ifile

		self.mysftp.batchsftp(username=self.localu, password=self.localp, cfile=self.cmdFile, ifile=self.ipFile,
								reboot='yes')


class Telnet(QtCore.QObject):
	printToScreen = QtCore.pyqtSignal(str)
	telnetSignal = QtCore.pyqtSignal(str, str, str, str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.tel = telnet.Telnet(parent=self)
		self.telnetSignal.connect(self.tel.telnet)

	@QtCore.pyqtSlot(str, str, str)
	def run_telnet(self, ip_input, username_input, password_input):
		print("Telnet")
		print(ip_input + username_input, password_input)

		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input

	@QtCore.pyqtSlot(str)
	def set_telnet(self, method):
		self.telnetSignal.emit(self.localip, self.localu, self.localp, method)
		print("sup")


class Mikrotik(QtCore.QObject):
	printToScreen = QtCore.pyqtSignal(str)
	pingSignal = QtCore.pyqtSignal(str, str, bool)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

		self.printToScreen.connect(self.parent().gui.update_status)
		self.ip = ping.IPTest(parent=self)
		self.pingSignal.connect(self.ip.mikrotik_checker)

	@QtCore.pyqtSlot(str, str, str)
	def run_mikro(self, ip_input, username_input, password_input):
		print("Password")
		print(ip_input + username_input, password_input)

		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input

	@QtCore.pyqtSlot(str, str, bool)
	def set_mikro(self, ip, subnet, to):
		self.pingSignal.emit(ip, subnet, to)
