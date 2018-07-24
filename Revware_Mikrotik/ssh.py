import paramiko
import time
import os
from PyQt5 import QtCore

class sshConnection(QtCore.QObject):

	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.username = ''
		self.password = ''
		self.port = '0'
		self.transport=None
		self.sftp=None
		self.filepath=None
		self.localpath=None
		self.client=None
		self.printToScreen.connect(parent.parent().gui.updateStatus)


	def printProgress(self,iteration, total, pre = '', suf = '', dec = 2, len = 100, fill = '█'):
		percent = ("{0:." + str(dec) + "f}").format(100 * (iteration/float(total)))
		filledLength = int(len * iteration // total)
		bar = fill * filledLength + '-' * (len - filledLength)
		print('\r%s |%s| %s%% %s' % (pre, bar, percent, suf), end = '')

		if iteration == total:
			print()



	@QtCore.pyqtSlot(str,str,str,str)
	def ssh(self, ip, username, password, mikrotikCommand):
		self.ip = ip
		self.username = username
		self.password = password
		self.port = 22


		try:
			self.client = paramiko.SSHClient()
			self.client.load_system_host_keys()
			self.client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
			self.client.connect(ip, port=self.port, username=self.username, password=self.password)
			stdin, stdout, stderr = self.client.exec_command(mikrotikCommand)
			x=stdout.read()
			if mikrotikCommand == "system reboot":
				self.printToScreen.emit("Rebooting Radio...")
				QtCore.QCoreApplication.processEvents()
			elif mikrotikCommand == "ip firewall filter print":
				y=x.decode("UTF-8")
				self.printToScreen.emit(y)
			else:
				self.client.close()

			#return result

		except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):
			self.printToScreen.emit("Command not succesfully executed, please try again")




	def transfer(self,transferred, to_transfer):
		#print("Transferred: {0}/{1}".format(transferred, to_transfer))
		self.printProgress(transferred, to_transfer, pre = 'Progress:', suf = 'Complete', len=60)

	@QtCore.pyqtSlot(str,str,str)
	def firmwaresftp(self, ip1, username1, password1):
		#print("check 2.5")
		#self.signalStatus.emit("check 2.5")
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
			self.localpath = r'C:\Mikrotik\routeros-mipsbe-6.39.3.npk'

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

