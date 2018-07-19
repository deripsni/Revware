import ssh
import time
import ping
from ftplib import FTP

def batchftp(username, password):

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
		ftp = FTP(ips[i])
		ftp.login(username, password)
		file = open(cfile, 'rb')
		ftp.storbinary('STOR batch.auto.rsc', file)
		directory= [] 			#list to store mikrotik directory
		files = ''				#string to concatenate the list into
		ftp.retrlines('LIST', directory.append)

		if 'auto.log' in files.join(directory):
			log = ftp.retrbinary("RETR batch.auto.log", open('lfile', 'wb').write)
			ftp.delete('batch.auto.log')
			ftp.delete('batch.auto.rsc')
			print(ips[i], "executed the file successfully")
		ftp.close()
		if reboot == 'Y' or reboot == 'y':
			ssh.ssh(ips[i], username, password, 'system reboot')

	if reboot == 'Y' or reboot == 'y':
		print('\n\n')
		if len(ips) < 5:  # avoids an issue where the radios are pinged before they shut down for short ip lists
			time.sleep(4)
		print('checking for rebooted machines.')
		for i in range(len(ips)):
			print("Waiting.", end = '')
			ping.ping(ips[i])


def filecallback(i):   #callback function that does nothing
	x=1