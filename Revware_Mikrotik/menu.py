import ping
import ssh
import telnet
import time
import sys
import sftp
import gui
from PyQt5 import QtCore
from PyQt5.QtWidgets import QApplication
import threading

def Menu():
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
		self.createSSH()

	@QtCore.pyqtSlot(str,str,str)
	def runFirmware(self, ipInput, usernameInput, passwordInput):
		print("Firmware")
		print (ipInput + usernameInput, passwordInput)

		localip=ipInput
		localu=usernameInput
		localp=passwordInput

		time.sleep(1)
		self.firmwaresftpSignal.emit(localip, localu, localp)

		self.sshSignal.emit(localip, localu, localp, "system reboot")

		sys.stdout.flush()
		time.sleep(5)

		self.pingSignal.emit(localip, 50, True)
		#self.parent.firmware_thread.exit()

	def createSSH(self):
		self.sshc = ssh.sshConnection(parent=self)
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
		self.createSSH()

	@QtCore.pyqtSlot(str,str,str)
	def runPassword(self, ipInput, usernameInput, passwordInput):
		print("Password")
		print (ipInput + usernameInput, passwordInput)

		self.localip=ipInput
		self.localu=usernameInput
		self.localp=passwordInput

	def createSSH(self):
		self.sshc = ssh.sshConnection(parent=self)
		self.sshSignal.connect(self.sshc.ssh)


	@QtCore.pyqtSlot(str, str)
	def setPassword(self, nPassword, cPassword):
		if nPassword == cPassword:
			self.command =  "user set admin password=" + nPassword
			self.sshSignal.emit(self.localip, self.localu, self.localp, self.command)
			self.printToScreen.emit("Password Set")
			#self.parent.firmware_thread.exit()

class Firewall(QtCore.QObject):

	printToScreen = QtCore.pyqtSignal(str)
	sshSignal = QtCore.pyqtSignal(str, str, str, str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.createSSH()

	@QtCore.pyqtSlot(str,str,str)
	def runFirewall(self, ipInput, usernameInput, passwordInput):
		print("Firewall")
		print (ipInput + usernameInput, passwordInput)

		self.localip=ipInput
		self.localu=usernameInput
		self.localp=passwordInput
		self.sshSignal.emit(self.localip, self.localu, self.localp, "ip firewall filter print")
		#self.thread().exit()

	def createSSH(self):
		self.sshc = ssh.sshConnection(parent=self)
		self.sshSignal.connect(self.sshc.ssh)

class DeviceName(QtCore.QObject):

	printToScreen = QtCore.pyqtSignal(str)
	sshSignal = QtCore.pyqtSignal(str, str, str, str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.createSSH()

	@QtCore.pyqtSlot(str,str,str)
	def runDeviceName(self, ipInput, usernameInput, passwordInput):
		print("Device Name")
		print (ipInput + usernameInput, passwordInput)

		self.localip=ipInput
		self.localu=usernameInput
		self.localp=passwordInput
		self.sshSignal.emit(self.localip, self.localu, self.localp, "system identity print")

	def createSSH(self):
		self.sshc = ssh.sshConnection(parent=self)
		self.sshSignal.connect(self.sshc.ssh)


class CustomCommand(QtCore.QObject):

	printToScreen = QtCore.pyqtSignal(str)
	sshSignal = QtCore.pyqtSignal(str, str, str, str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.createSSH()

	@QtCore.pyqtSlot(str,str,str)
	def runCustomCommand(self, ipInput, usernameInput, passwordInput):
		print("Custom Command")
		print (ipInput + usernameInput, passwordInput)

		self.localip=ipInput
		self.localu=usernameInput
		self.localp=passwordInput

	def createSSH(self):
		self.sshc = ssh.sshConnection(parent=self)
		self.sshSignal.connect(self.sshc.ssh)


	@QtCore.pyqtSlot(str)
	def setCommand(self, cmd):

		self.command = cmd
		self.sshSignal.emit(self.localip, self.localu, self.localp, self.command)
		self.printToScreen.emit("Command Sent")
		#self.parent.firmware_thread.exit()

class BatchSFTP(QtCore.QObject):


	signalStatus = QtCore.pyqtSignal()
	firmwaresftpSignal = QtCore.pyqtSignal(str, str, str)
	sshSignal = QtCore.pyqtSignal(str, str, str, str)
	pingSignal = QtCore.pyqtSignal(str, int, bool)
	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.createSSH()

	@QtCore.pyqtSlot(str,str)
	def runBatchSFTP(self, usernameInput, passwordInput):
		print("Batch SFTP")
		print (usernameInput, passwordInput)

		self.localu=usernameInput
		self.localp=passwordInput


	def createSSH(self):
		self.sshc = ssh.sshConnection(parent=self)
		self.firmwaresftpSignal.connect(self.sshc.firmwaresftp)
		self.sshSignal.connect(self.sshc.ssh)
		self.ip = ping.IPTest(parent=self)
		self.pingSignal.connect(self.ip.ping)
		self.mysftp= sftp.SFTP(parent=self)


	@QtCore.pyqtSlot(str, str)
	def setBatchSFTP(self, cfile, ifile):

		self.cmdFile = cfile
		self.ipFile	= ifile

		self.mysftp.batchsftp(username=self.localu, password=self.localp,cfile=self.cmdFile, ifile=self.ipFile, reboot='yes')

class Telnet(QtCore.QObject):

	printToScreen = QtCore.pyqtSignal(str)
	telnetSignal = QtCore.pyqtSignal(str,str,str,str)


	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(self.parent().gui.update_status)
		self.tel=telnet.Telnet(parent=self)
		self.telnetSignal.connect(self.tel.telnet)

	@QtCore.pyqtSlot(str,str,str)
	def runTelnet(self, ipInput, usernameInput, passwordInput):
		print("Password")
		print (ipInput + usernameInput, passwordInput)

		self.localip=ipInput
		self.localu=usernameInput
		self.localp=passwordInput


	@QtCore.pyqtSlot(str)
	def setTelnet(self, method):
		self.telnetSignal.emit(self.localip, self.localu, self.localp, method)


class Mikrotik(QtCore.QObject):

	printToScreen = QtCore.pyqtSignal(str)
	pingSignal = QtCore.pyqtSignal(str, str, bool)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

		self.printToScreen.connect(self.parent().gui.update_status)
		self.ip = ping.IPTest(parent=self)
		self.pingSignal.connect(self.ip.mikrotik_checker)

	@QtCore.pyqtSlot(str,str,str)
	def runMikro(self, ipInput, usernameInput, passwordInput):
		print("Password")
		print (ipInput + usernameInput, passwordInput)

		self.localip=ipInput
		self.localu=usernameInput
		self.localp=passwordInput

	@QtCore.pyqtSlot(str,str,bool)
	def setMikro(self, ip, subnet, to):

		self.pingSignal.emit(ip, subnet, to)

def main():
	loop = True
	while loop:
		Menu()
		choice = input("Enter choice: ")

		if choice == "1":
			Firmware()

		elif choice == "2":
			Password()

		elif choice == "3":
			Firewall()

		elif choice == "4":
			DeviceName()

		elif choice == "5":
			CustomCommand()

		elif choice == "6":
			Telnet()

		elif choice == "7":
			BatchSFTP()


		elif choice == "8":

			print("Mikrotik Checker")

			ipInput = input("IP: ")

			subnetInput = input("Subnet: ")

			timeoutInput = input("Would you like to include timed out devices in the search? (Yy/Nn): ")

			if timeoutInput == "Y" or "y":

				timeoutInput = True

			else:

				timeoutInput = False

			ping.mikrotik_checker(ip=ipInput, subnet=subnetInput, option=timeoutInput)


		else:
			print("Try Again")


if __name__ == "__main__":
	main()
