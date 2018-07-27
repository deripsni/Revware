import ping
import ssh
import telnet
import time
import sys
import sftp
from PyQt5 import QtCore


def menu():
	print(25 * "-", "REVWARE Mikrotik", 24 * "-")
	print("1. Firmware")
	print("2. Password")
	print("3. Firewall")
	print("4. Radio Name")
	print("5. Custom Command")
	print("6. Telnet [WIP]")
	print("7. Batch SFTP")
	print("8. Exit")
	print(67 * "-")


class Firmware(QtCore.QObject):
	signalStatus = QtCore.pyqtSignal()
	firmwaresftpSignal = QtCore.pyqtSignal(str, str, str)
	sshSignal = QtCore.pyqtSignal(str, str, str, str)
	pingSignal = QtCore.pyqtSignal(str, int, bool)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		print("Firmware Thread Initialized")
		self.create_ssh()

	@QtCore.pyqtSlot(str, str, str)
	def run_firmware(self, ip_input, username_input, password_input):
		print("Firmware")
		print(ip_input + username_input, password_input)

		localip = ip_input
		localu = username_input
		localp = password_input

		time.sleep(1)
		self.firmwaresftpSignal.emit(localip, localu, localp)

		self.sshSignal.emit(localip, localu, localp, "system reboot")

		sys.stdout.flush()
		time.sleep(5)

		self.pingSignal.emit(localip, 50, True)

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)
		self.firmwaresftpSignal.connect(self.sshc.firmwaresftp)
		self.sshSignal.connect(self.sshc.ssh)
		self.ip = ping.IPTest(parent=self)
		self.pingSignal.connect(self.ip.ping)


class Password(QtCore.QObject):
	printToScreen = QtCore.pyqtSignal(str)
	sshSignal = QtCore.pyqtSignal(str, str, str, str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.create_ssh()

	@QtCore.pyqtSlot(str, str, str)
	def run_password(self, ip_input, username_input, password_input):
		print("Password")
		print(ip_input + username_input, password_input)

		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)
		self.sshSignal.connect(self.sshc.ssh)

	@QtCore.pyqtSlot(str, str)
	def set_password(self, n_password, c_password):
		if n_password == c_password:
			self.command = "user set admin password=" + n_password
			self.sshSignal.emit(self.localip, self.localu, self.localp, self.command)
			self.printToScreen.emit("Password Set")


# self.parent.firmware_thread.exit()


class Firewall(QtCore.QObject):
	printToScreen = QtCore.pyqtSignal(str)
	sshSignal = QtCore.pyqtSignal(str, str, str, str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.create_ssh()

	@QtCore.pyqtSlot(str, str, str)
	def run_firewall(self, ip_input, username_input, password_input):
		print("Firewall")
		print(ip_input + username_input, password_input)

		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input
		self.sshSignal.emit(self.localip, self.localu, self.localp, "ip firewall filter print")

	# self.thread().exit()

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)
		self.sshSignal.connect(self.sshc.ssh)


class DeviceName(QtCore.QObject):
	printToScreen = QtCore.pyqtSignal(str)
	sshSignal = QtCore.pyqtSignal(str, str, str, str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.create_ssh()

	@QtCore.pyqtSlot(str, str, str)
	def run_device_name(self, ip_input, username_input, password_input):
		print("Device Name")
		print(ip_input + username_input, password_input)

		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input
		self.sshSignal.emit(self.localip, self.localu, self.localp, "system identity print")

	def create_ssh(self):
		self.sshc = ssh.SSHConnection(parent=self)
		self.sshSignal.connect(self.sshc.ssh)


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
		self.firmwaresftpSignal.connect(self.sshc.firmwaresftp)
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
		print("Password")
		print(ip_input + username_input, password_input)

		self.localip = ip_input
		self.localu = username_input
		self.localp = password_input

	@QtCore.pyqtSlot(str)
	def set_telnet(self, method):
		self.telnetSignal.emit(self.localip, self.localu, self.localp, method)


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
