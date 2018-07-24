import telnetlib
from PyQt5 import QtCore

class Telnet(QtCore.QObject):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

	def telnet(self, ip, username, password, option):
		self.ip = ip
		self.username = username
		self.password = password
		self.option = option

		self.tn = telnetlib.Telnet(self.ip, 23)
		self.tn.read_until(b"Login: ", 5)
		self.tn.write(self.username.encode('ascii') + b"+ct" + b"\r\n")
		self.tn.read_until(b"Password: ", 5)
		self.tn.write(self.password.encode('ascii') + b"\r\n")
		self.tn.read_until(b">", 5)
		if self.option == "ssh":
			self.tn.write(b"/ip service enable ssh" + b"\r\n")
			print("\nSSH has been enabled\n")
		elif self.option == "ftp":
			self.tn.write(b"/ip service enable ftp" + b"\r\n")
			print("\nFTP has been enabled\n")
		elif self.option == "winbox":
			self.tn.write(b"/ip service enable winbox" + b"\r\n")
			print("\nWinbox has been enabled\n")
		self.tn.write(b"quit" + b"\r\n")

		self.tn.read_all()


