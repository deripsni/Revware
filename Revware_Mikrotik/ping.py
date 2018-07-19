import subprocess
import ipaddress
import socket


def ping(ip, tries):
	ip = ip

	max_tries = tries
	current_try = 0

	while current_try < max_tries:
		p = subprocess.Popen("ping -n 1 " + ip, stdout=subprocess.PIPE).communicate()[0]
		# print(p.decode("utf-8")) 		# display ping results
		if b"unreachable" in p:
			print(".", end="", flush=True)
		elif b"timed out" in p:
			print(".", end="", flush=True)
		else:
			print("%s online \n" % ip)
			return "online"

		current_try += 1

	else:
		print("{}{}{}".format("Radio didn't return after: ", max_tries, " tries."))


def mikrotik_checker(ip, subnet):
	ip = ip
	subnet = subnet

	network = ipaddress.IPv4Network(ip + subnet)
	file = open("ipList.txt", "w")
	for addr in network:
		status = ping(str(addr), tries=1)
		if status == "online":
			sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
			result = sock.connect_ex((str(addr), 8291))
			if result == 0:
				file.write(str(addr) + "\n")
				# print("Winbox is enabled! Mikrotik found!")  # Success Message
			sock.close()
	file.close()