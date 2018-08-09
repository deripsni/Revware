import paramiko
import time
from PyQt5 import QtCore


class SSHConnection(QtCore.QObject):
	progressSignal = QtCore.pyqtSignal(int)
	pMaxSignal = QtCore.pyqtSignal(int)
	pCloseSignal = QtCore.pyqtSignal()
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.username = ''
		self.password = ''
		self.port = '0'
		self.transport = None
		self.sftp = None
		self.filepath = None
		self.localpath = None
		self.client = None
		self.printToScreen.connect(parent.parent().gui.update_status)
		self.progressSignal.connect(parent.parent().progresswindow.update_progress)
		self.pMaxSignal.connect(parent.parent().progresswindow.set_max)
		self.pCloseSignal.connect(parent.parent().progresswindow.close)

	def print_progress(self, iteration, total, pre ='', suf ='', dec = 2, len = 100, fill ='█'):
		percent = ("{0:." + str(dec) + "f}").format(100 * (iteration/float(total)))
		filled_length = int(len * iteration // total)
		bar = fill * filled_length + '-' * (len - filled_length)
		print('\r%s |%s| %s%% %s' % (pre, bar, percent, suf), end='')

		if iteration == total:
			print()

	@QtCore.pyqtSlot(str, str, str, str)
	def ssh(self, ip, username, password, mikrotik_command, attempts=0):
		self.ip = ip
		self.username = username
		self.password = password
		self.port = 22
		self.attempts = attempts
		print("made it into the ssh")
		try:
			self.client = paramiko.SSHClient()
			self.client.load_system_host_keys()
			self.client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
			self.client.connect(ip, port=self.port, username=self.username, password=self.password)
			stdin, stdout, stderr = self.client.exec_command(mikrotik_command)
			if mikrotik_command == "system reboot":
				self.printToScreen.emit("Rebooting Radio...")
				QtCore.QCoreApplication.processEvents()
			elif mikrotik_command == "system identity print":
				self.x = stdout.read()
				self.x = "Name: " + self.x[7:].decode("UTF-8")
				self.printToScreen.emit(self.x)
			elif mikrotik_command[:23] == "user set admin password":
				self.printToScreen.emit("Password Set")
			else:
				self.x = stdout.read()
				self.y = self.x.decode("UTF-8")
				self.printToScreen.emit(self.y)
				self.client.close()

		except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):
			if self.attempts == 0:
				self.printToScreen.emit("Could not establish an SSH connection")
				self.printToScreen.emit("Attempting to enable SSH through Telnet")
				self.parent().tel.telnet(self.ip, self.username, self.password, "ssh")
				self.ssh(self.ip, self.username, self.password, mikrotik_command, attempts=1)
			else:
				self.printToScreen.emit("Still unable to establish connection")
				self.printToScreen.emit("please check your username and password")

		except (UnicodeError, RecursionError):
			self.printToScreen.emit("Please enter a valid IP")

	def transfer(self, transferred, to_transfer):
		self.print_progress(transferred, to_transfer, pre='Progress:', suf='Complete', len=60)
		self.pMaxSignal.emit(to_transfer)
		self.progressSignal.emit(transferred)

	def firmwaresftp(self, ip1, username1, password1, localpath1, attempts=0):
		self.ip = ip1
		self.username = username1
		self.password = password1
		self.port = 22
		self.attempts = attempts

		time.sleep(1)
		try:

			self.transport = paramiko.Transport(self.ip, self.port)
			self.transport.connect(username=self.username, password=self.password)
			self.sftp = paramiko.SFTPClient.from_transport(self.transport)

			self.filepath = '/routeros-mipsbe-6.39.1.npk'
			self.localpath = localpath1

			self.printToScreen.emit("Uploading file...")
			QtCore.QCoreApplication.processEvents()
			self.sftp.put(self.localpath, self.filepath, callback=self.transfer)
			self.pCloseSignal.emit()
			self.printToScreen.emit("DONE: File Uploaded")
			QtCore.QCoreApplication.processEvents()
			print("made check 1")
			self.sftp.close()
			print("made check 2")
			self.transport.close()
			print("made check 3")

		except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):

			if self.attempts == 0:
				self.printToScreen.emit("Could not establish an SSH connection")
				self.printToScreen.emit("Attempting to enable SSH through Telnet")
				self.parent().tel.telnet(self.ip, self.username, self.password, "ssh")
				self.firmwaresftp(self.ip, self.username, self.password, self.localpath, attempts=1)
			else:
				self.printToScreen.emit("Still unable to establish connection")
				self.printToScreen.emit("please check your username and password")

	def enable_api(self, ip, username, password, attempts=0):
		self.ip = ip
		self.username = username
		self.password = password
		self.port = 22
		self.attempts = attempts

		self.printToScreen.emit("Trying to enable the api thingi")

		try:
			self.client = paramiko.SSHClient()
			self.client.load_system_host_keys()
			self.client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
			self.client.connect(ip, port=self.port, username=self.username, password=self.password)
			stdin, stdout, stderr = self.client.exec_command("ip service enable api")
			self.printToScreen.emit("enabled it")

		except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):
			if self.attempts == 0:
				self.printToScreen.emit("Could not establish an SSH connection")
				self.printToScreen.emit("Attempting to enable SSH through Telnet")
				self.parent().tel.telnet(self.ip, self.username, self.password, "ssh")
				self.enable_api(self.ip, self.username, self.password, attempts=1)
			else:
				self.printToScreen.emit("Still unable to establish connection")
				self.printToScreen.emit("please check your username and password")

		except (UnicodeError, RecursionError):
			self.printToScreen.emit("Please enter a valid IP")
