import ssh
import paramiko
import time
import ping
from ftplib import FTP





def batchsftp(username, password):

	username = username
	password = password
	port = 22

	cfile = input("Command File [commands.txt]: ") or "commands.txt"
	reboot = input("Would you like to reboot the radios after the script has been run? [Y or N] ") or "N"
	ifile = input("IP File [ip.txt]: ") or "ips.txt"

	with open(cfile, 'r') as infile:
		commands = infile.read()


	with open(ifile, 'r') as infile:
		ips = infile.read().splitlines()






	for i in range(len(ips)):
		batchsftp2(username,password,ips[i],cfile)
		if reboot == 'Y' or reboot == 'y':
			ssh.ssh(ips[i], username, password, 'system reboot')

	if reboot == 'Y' or reboot == 'y':
		print('\n\n')
		if len(ips) < 5:  # avoids an issue where the radios are pinged before they shut down for short ip lists
			time.sleep(4)
		print('Checking for rebooted machines')
		for i in range(len(ips)):
			print("Waiting.", end = '')
			ping.ping(ips[i], tries=5, timeout_include=False)


def batchsftp2(username, password, ip, cfile):
	transport = paramiko.Transport(ip, 22)
	transport.connect(username=username, password=password)
	sftp = paramiko.SFTPClient.from_transport(transport)
	filepath = '/batch.bat'
	print("Uploading file...")
	sftp.put(cfile, filepath, callback=ssh.transfer)
	print("DONE: File Uploaded")
	ssh.ssh(ip, username, password, mikrotikCommand='/import batch.bat')

	# if "executed successfully" in result:
	# 	print("Script Executed Successfully")
	# else:
	# 	print("Script Did not Execute Successfully")
	sftp.close()
	transport.close()


def filecallback(i):   #callback function that does nothing
	x=1