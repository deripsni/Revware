import subprocess


def ping(ip, tries):
	ip = ip

	max_tries = tries
	current_try = 0

	while current_try < max_tries:
		p = subprocess.Popen("ping -n 1 " + ip, stdout=subprocess.PIPE).communicate()[0]
		#print(p.decode("utf-8"))
		if b"unreachable" in p:
			print(".", end="", flush=True)
		elif b"timed out" in p:
			print(".", end="", flush=True)
		else:
			print("Radio online \n")
			break

		current_try += 1

	else:
		print("{}{}{}".format("Radio didn't return after: ", max_tries, " tries."))
