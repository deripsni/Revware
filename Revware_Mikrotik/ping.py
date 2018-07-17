import subprocess


def ping(ip):
	ip = ip

	max_tries = 50
	current_try = 0

	while current_try < max_tries:
		p = subprocess.Popen("ping -n 1 " + ip, stdout=subprocess.PIPE).communicate()[0]
		print(p)
		if b"unreachable" or b"timed out" in p:
			print(".", end="", flush=True)
		else:
			print("Radio online \n")
			break

		current_try += 1

	else:
		print("{}{}{}".format("Radio didn't return after: ", max_tries, " tries."))
