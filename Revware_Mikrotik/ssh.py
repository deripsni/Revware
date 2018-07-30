import paramiko
import time
from PyQt5 import QtCore


class SSHConnection(QtCore.QObject):

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

	def print_progress(self, iteration, total, pre ='', suf ='', dec = 2, len = 100, fill ='█'):
		percent = ("{0:." + str(dec) + "f}").format(100 * (iteration/float(total)))
		filled_length = int(len * iteration // total)
		bar = fill * filled_length + '-' * (len - filled_length)
		print('\r%s |%s| %s%% %s' % (pre, bar, percent, suf), end='')

		if iteration == total:
			print()

	@QtCore.pyqtSlot(str, str, str, str)
	def ssh(self, ip, username, password, mikrotik_command):
		self.ip = ip
		self.username = username
		self.password = password
		self.port = 22

		try:
			self.client = paramiko.SSHClient()
			self.client.load_system_host_keys()
			self.client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
			self.client.connect(ip, port=self.port, username=self.username, password=self.password)
			stdin, stdout, stderr = self.client.exec_command(mikrotik_command)
			self.x = stdout.read()
			if mikrotik_command == "system reboot":
				self.printToScreen.emit("Rebooting Radio...")
				QtCore.QCoreApplication.processEvents()
			elif mikrotik_command == "system identity print":
				self.x = "Name: " + self.x[7:].decode("UTF-8")
				self.printToScreen.emit(self.x)
			else:
				self.y = self.x.decode("UTF-8")
				self.printToScreen.emit(self.y)
				self.client.close()

		except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):
			self.printToScreen.emit("Command not succesfully executed, please try again")

	def transfer(self, transferred, to_transfer):
		self.print_progress(transferred, to_transfer, pre='Progress:', suf='Complete', len=60)

	@QtCore.pyqtSlot(str, str, str, str)
	def firmwaresftp(self, ip1, username1, password1, localpath1):
		self.ip = ip1
		self.username = username1
		self.password = password1
		self.port = 22
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
			self.printToScreen.emit("DONE: File Uploaded")
			QtCore.QCoreApplication.processEvents()
			self.sftp.close()
			self.transport.close()

		except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):
			self.printToScreen.emit("SSH not enabled on Radio")
			QtCore.QCoreApplication.processEvents()
