import telnetlib
from PyQt5 import QtCore

class Telnet(QtCore.QObject):
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(parent.parent().gui.update_status)

	@QtCore.pyqtSlot(str,str,str,str)
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
			self.printToScreen.emit("SSH had been enabled")
		elif self.option == "ftp":
			self.tn.write(b"/ip service enable ftp" + b"\r\n")
			self.printToScreen.emit("FTP has been enabled")
		elif self.option == "winbox":
			self.tn.write(b"/ip service enable winbox" + b"\r\n")
			self.printToScreen.emit("Winbox has been enabled")
		self.tn.write(b"quit" + b"\r\n")

		self.tn.read_all()


