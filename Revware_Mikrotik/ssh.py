import paramiko



def printProgress(iteration, total, pre = '', suf = '', dec = 2, len = 100, fill = '█'):
	percent = ("{0:." + str(dec) + "f}").format(100 * (iteration/float(total)))
	filledLength = int(len * iteration // total)
	bar = fill * filledLength + '-' * (len - filledLength)
	print('\r%s |%s| %s%% %s' % (pre, bar, percent, suf), end = '')

	if iteration == total:
		print()

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
		#result, stdin, stdout, stderr=client.exec_command(mikrotikCommand)
		#result = stdin.read().strip() + stdout.read().strip()
		#result = ' '
		if mikrotikCommand == "system reboot":
			print("Rebooting Radio...",  end='')

		else:
			client.close()

		#return result

	except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):
		print("Command not succesfully executed, please try again")




def transfer(transferred, to_transfer):
	#print("Transferred: {0}/{1}".format(transferred, to_transfer))
	printProgress(transferred, to_transfer, pre = 'Progress:', suf = 'Complete', len=60)

def firmwaresftp(ip, username, password):
	ip = ip
	username = username
	password = password
	port = 22

	try:
		transport = paramiko.Transport(ip, port)
		transport.connect(username=username, password=password)
		sftp = paramiko.SFTPClient.from_transport(transport)

		filepath = '/routeros-mipsbe-6.39.1.npk'
		localpath = r'C:\Mikrotik\routeros-mipsbe-6.39.3.npk'

		print("Uploading file...")
		sftp.put(localpath, filepath, callback=transfer)
		print("DONE: File Uploaded")

		sftp.close()
		transport.close()

	except (paramiko.ssh_exception.SSHException, paramiko.ssh_exception.NoValidConnectionsError):
		print("SSH not enabled on Radio")


