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
	firmwaresftpSignal = QtCore.pyqtSignal(str,str,str)
	sshSignal = QtCore.pyqtSignal(str,str,str,str)
	pingSignal = QtCore.pyqtSignal(str,int)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.createSSH()

	@QtCore.pyqtSlot()
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

		self.pingSignal.emit(localip, 50)

	def createSSH(self):
		self.sshc = ssh.sshConnection(parent=self)
		self.firmwaresftpSignal.connect(self.sshc.firmwaresftp)
		self.sshSignal.connect(self.sshc.ssh)
		self.ip = ping.IPTest(parent=self)
		self.pingSignal.connect(self.ip.ping)


def Password():
	ipInput = input("IP: ")
	usernameInput = input("Username [admin]: ") or "admin"
	passwordInput = input("Password [west09]: ") or "west09"
	newPassword = input("New Password [!nter@P1n00]: ") or "!inter@P1n00"
	mCommand = "user set admin password=" + newPassword
	ssh.ssh(ip=ipInput, username=usernameInput, password=passwordInput, mikrotikCommand=mCommand)
	print("Password Changed")

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
			print("Firewall")
			ipInput = input("IP: ")
			usernameInput = input("Username [admin]: ") or "admin"
			passwordInput = input("Password [west09]: ") or "west09"

			ssh.ssh(ip=ipInput, username=usernameInput, password=passwordInput, mikrotikCommand="ip firewall filter print")

		elif choice == "4":
			print("Radio Name")
			ipInput = input("IP: ")
			usernameInput = input("Username [admin]: ") or "admin"
			passwordInput = input("Password [west09]: ") or "west09"

			ssh.ssh(ip=ipInput, username=usernameInput, password=passwordInput, mikrotikCommand="system identity print")

		elif choice == "5":
			print("Custom Command")
			ipInput = input("IP: ")
			usernameInput = input("Username [admin]: ") or "admin"
			passwordInput = input("Password [west09]: ") or "west09"
			mikrotikInput = input("Command: ") or ""

			ssh.ssh(ip=ipInput, username=usernameInput, password=passwordInput, mikrotikCommand=mikrotikInput)

		elif choice == "6":
			print("Telnet")
			ipInput = input("IP: ")
			usernameInput = input("Username [admin]: ") or "admin"
			passwordInput = input("Password [west09]: ") or "west09"
			option = input("Protocol to turn on (ssh, ftp, winbox) [ssh]: ") or "ssh"
			if option != "ssh" or "ftp" or "winbox":
				print("Invalid command, please try again!\n")
			else:
				telnet.telnet(ipInput, usernameInput, passwordInput, option)

		elif choice == "7":
			print("Batch FTP")
			usernameInput = input("Username [admin]: ") or "admin"
			passwordInput = input("Password [west09]: ") or "west09"
			sftp.batchsftp(username=usernameInput, password=passwordInput)

		elif choice == "8":
			print("Exit")
			loop = False

		else:
			print("Try Again")


if __name__ == "__main__":
	main()
