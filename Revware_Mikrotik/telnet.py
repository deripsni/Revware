# changes made my Quinn MCHie
import telnetlib


def telnet(ip, username, password, option):
	ip = ip
	username = username
	password = password
	option = option

	tn = telnetlib.Telnet(ip, 23)
	tn.read_until(b"Login: ", 5)
	tn.write(username.encode('ascii') + b"+ct" + b"\r\n")
	tn.read_until(b"Password: ", 5)
	tn.write(password.encode('ascii') + b"\r\n")
	tn.read_until(b">", 5)
	if option == "ssh":
		tn.write(b"/ip service enable ssh" + b"\r\n")
		print("\nSSH has been enabled\n")
	elif option == "ftp":
		tn.write(b"/ip service enable ftp" + b"\r\n")
		print("\nFTP has been enabled\n")
	elif option == "winbox":
		tn.write(b"/ip service enable winbox" + b"\r\n")
		print("\nWinbox has been enabled\n")
	tn.write(b"quit" + b"\r\n")

	tn.read_all()