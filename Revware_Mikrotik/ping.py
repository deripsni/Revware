import subprocess


def ping(ip):
	ip = ip

	max_tries = 50
	current_try = 0

	while current_try < max_tries:
		p = subprocess.Popen("ping -n 1 " + ip, stdout=subprocess.PIPE).communicate()[0]
		#print(p.decode("utf-8")) 		#display ping results
		if b"unreachable" in p:
			print(".", end="", flush=True)
		elif b"timed out" in p:
			print(".", end="", flush=True)
		else:
			print("%s online \n" % ip)
			break

		current_try += 1

	else:
		print("{}{}{}".format("Radio didn't return after: ", max_tries, " tries."))
