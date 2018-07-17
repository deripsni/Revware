import paramiko


def ssh(ip, username, password, mikrotikCommand):
	ip = ip
	username = username
	password = password
	port = 22

	try:
		client = paramiko.SSHClient()
		client.load_system_host_keys()
		client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
		client.connect(ip, port=port, username=username, password=password)
		stdin, stdout, stderr = client.exec_command(mikrotikCommand)

		if mikrotikCommand == "system reboot":
			print("Rebooting Radio...")

		else:
			print(stdout.read().decode('UTF-8'))

			client.close()

	except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):
		print("SSH not enabled on Radio")


def transfer(transferred, to_transfer):
	print("Transferred: {0}/{1}".format(transferred, to_transfer))


def sftp(ip, username, password):
	ip = ip
	username = username
	password = password
	port = 22

	try:
		transport = paramiko.Transport(ip, port)
		transport.connect(username=username, password=password)
		sftp = paramiko.SFTPClient.from_transport(transport)

		filepath = '/routeros-mipsbe-6.39.1.npk'
		localpath = r'C:\Users\jthornton\Documents\Mikrotik\routeros-mipsbe-6.39.1.npk'

		print("Uploading file...")
		sftp.put(localpath, filepath, callback=transfer)
		print("DONE: File Uploaded")

		sftp.close()
		transport.close()

	except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):
		print("SSH not enabled on Radio")