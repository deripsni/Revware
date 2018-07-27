import ssh
import paramiko
import time
import ping
from PyQt5 import QtCore


class SFTP(QtCore.QObject):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

	def batchsftp(self, username, password, cfile, ifile, reboot):

		self.uname = username
		self.password = password

		with open(ifile, 'r') as infile:
			ips = infile.read().splitlines()

		for i in range(len(ips)):
			self.batchsftp2(username, password, ips[i], cfile)
			if reboot == 'Y' or reboot == 'y':
				ssh.ssh(ips[i], username, password, 'system reboot')

		if reboot == 'Y' or reboot == 'y':
			print('\n\n')
			if len(ips) < 5:  # avoids an issue where the radios are pinged before they shut down for short ip lists
				time.sleep(4)
			print('Checking for rebooted machines')
			for i in range(len(ips)):
				print("Waiting.", end='')
				ping.ping(ips[i])

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
