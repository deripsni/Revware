import subprocess
import ipaddress
import socket


def ping(ip, tries, timeout_include):
	ip = ip
	timeout_include = timeout_include
	max_tries = tries
	current_try = 0
	timeout_total = 0

	while current_try < max_tries:
		p = subprocess.Popen("ping -n 1 " + ip, stdout=subprocess.PIPE).communicate()[0]
		# print(p.decode("utf-8")) 		# display ping results
		if b"unreachable" in p:
			print("!", end="", flush=True)
		elif b"timed out" in p:
			timeout_total += 1
			print(".", end="", flush=True)
		else:
			print("%s is online \n" % ip)
			return "online"

		current_try += 1

	if timeout_include:
		if timeout_total > 0:
			print("%s is not responding to pings \n" % ip)
			return "online"
		else:
			print("{}{}{}".format("Radio didn't return after: ", max_tries, " tries."))
	else:
		print("{}{}{}".format("Radio didn't return after: ", max_tries, " tries."))


def mikrotik_checker(ip, subnet, option):
	ip = ip
	subnet = subnet
	option = option

	network = ipaddress.IPv4Network(ip + subnet)
	file = open("ipList.txt", "w")
	for addr in network:
		status = ping(str(addr), tries=2, timeout_include=option)
		if status == "online":
			sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
			result = sock.connect_ex((str(addr), 8291))
			if result == 0:
				file.write(str(addr) + "\n")
				# print("Winbox is enabled! Mikrotik found!")  # Success Message
			sock.close()
	file.close()