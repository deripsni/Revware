import paramiko


def ssh(ip, username, password):
	ip = ip
	username = username
	password = password
	port = 22

	client = paramiko.SSHClient()
	client.load_system_host_keys()
	client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
	client.connect(ip, port=port, username=username, password=password)

	channel = client.invoke_shell()

	channel_data = str()

	while True:
		if channel.recv_ready():
			channel_data += channel.recv(999)
		else:
			continue

		if channel_data.endswith(' > '):
			channel.send('system identity print\n')

		else:
			client.close()
