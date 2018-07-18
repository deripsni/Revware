import paramiko
from ftplib import FTP

def batchsftp(username, password):

	username = username
	password = password
	port = 22

	cfile = input("Command File [commands.txt]: ") or "commands.txt"
	ifile = input("IP File [ip.txt]: ") or "ips.txt"

	with open(ifile, 'r') as infile:
		ips = infile.read().splitlines()

	for i in range(len(ips)):
		filetransfer(ips[i],username,password,cfile)

def filetransfer(ip,username,password, cfile):

	ftp=FTP(ip)
	ftp.login(username,password)
	file = open(cfile, 'rb')
	ftp.storbinary('STOR batch.auto.rsc', file)
	files = ftp.retrlines('LIST',donothing)
	if "o" in files:
		log = ftp.retrbinary("RETR batch.auto.log", open('lfile', 'wb').write)
		ftp.delete('batch.auto.log')
		ftp.delete('batch.auto.rsc')
		print(ip, "executed the file successfully")
	ftp.close()
	print('Done')

def donothing(i):
	j=0