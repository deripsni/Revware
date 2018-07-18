import ping
import ssh
import telnet
import time
import sys
import ftp


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


loop = True

while loop:
	menu()
	choice = input("Enter choice: ")

	if choice == "1":
		print("Firmware")
		ipInput = input("IP: ") or "67.158.236.212"
		usernameInput = input("Username [admin]: ") or "admin"
		passwordInput = input("Password [west09]: ") or "west09"

		ssh.firmwaresftp(ip=ipInput, username=usernameInput, password=passwordInput)
		ssh.ssh(ip=ipInput, username=usernameInput, password=passwordInput, mikrotikCommand="system reboot")

		sys.stdout.flush()
		time.sleep(10)

		ping.ping(ipInput)

	elif choice == "2":
		ipInput = input("IP: ")
		usernameInput = input("Username [admin]: ") or "admin"
		passwordInput = input("Password [west09]: ") or "west09"
		newPassword = input("New Password [!nter@P1n00]: ") or "!inter@P1n00"
		mCommand = "user set admin password="  + newPassword
		ssh.ssh(ip=ipInput, username=usernameInput, password=passwordInput,
				mikrotikCommand=mCommand)
		print("Password Changed")

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

		telnet.telnet(ipInput, usernameInput, passwordInput)

	elif choice == "7":
		print("Batch FTP")
		usernameInput = input("Username [admin]: ") or "admin"
		passwordInput = input("Password [west09]: ") or "west09"
		ftp.batchsftp(username=usernameInput, password=passwordInput)


	elif choice == "8":
		print("Exit")
		loop = False

	else:
		print("Try Again")


#this was running the menu function after exit was chosen
#if __name__ == "__main__":
#	menu()
