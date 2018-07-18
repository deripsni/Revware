import telnetlib


def telnet(ip, username, password):
	ip = ip
	username = username
	password = password

	tn = telnetlib.Telnet(ip, 23)

	tn.read_until(b"Login: ", 5)

	print(username.encode('ascii') + b"\n")
	tn.write(username.encode('ascii') + b"\n")
	tn.read_until(b"Password: ", 5)
	tn.write(password.encode('ascii') + b"\n")
	tn.read_until(b">", 5)
	tn.write(b"/system reboot" + b"\n")
	tn.write(b"quit \n")
	print("swag")
	print(tn.read_all())
