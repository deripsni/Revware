
import subprocess
import ipaddress
import socket
from PyQt5 import QtCore


class IPTest(QtCore.QObject):

	printToScreen = QtCore.pyqtSignal(str)
	progressSignal = QtCore.pyqtSignal(int)
	pMaxSignal = QtCore.pyqtSignal(int)
	pCloseSignal = QtCore.pyqtSignal()

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(parent.parent().gui.update_status)
		self.progressSignal.connect(parent.parent().progresswindow.update_progress)
		self.pMaxSignal.connect(parent.parent().progresswindow.set_max)
		self.pCloseSignal.connect(parent.parent().progresswindow.close)

	@QtCore.pyqtSlot(str, int, bool)
	def ping(self, ip1, tries, timeout_include):
		print("pinging stuff")
		self.ip = ip1
		self.timeout_include = timeout_include
		self.max_tries = tries
		self.current_try = 0
		timeout_total = 0

		while self.current_try < self.max_tries:
			QtCore.QCoreApplication.processEvents()
			self.p = subprocess.Popen("ping -n 1 " + self.ip, stdout=subprocess.PIPE).communicate()[0]
			# print(p.decode("utf-8")) 		# display ping results
			if b"unreachable" in self.p:
				print("!", end="", flush=True)
			elif b"timed out" in self.p:
				timeout_total += 1
				print(".", end="", flush=True)
			else:
				x = "%s online \n" % self.ip
				self.printToScreen.emit(x)
				QtCore.QCoreApplication.processEvents()
				break

			self.current_try += 1

		if timeout_include:

			if timeout_total > 0:

				print("%s is not responding to pings \n" % self.ip)

				return "online"

			else:

				print("{}{}{}".format("Radio didn't return after: ", self.max_tries, " tries."))

	@QtCore.pyqtSlot(str, str, bool)
	def mikrotik_checker(self, ip1, subnet1, option1):
		self.ip = ip1
		self.subnet = subnet1
		self.option = option1
		print(self.ip + " is the IP")
		print(self.subnet + "is the Subnet")
		self.number = 2**(32-int(subnet1[-2:]))
		self.count = 0
		print(self.number)
		self.network = ipaddress.IPv4Network(self.ip + self.subnet)
		file = open("ipList.txt", "w")
		self.pMaxSignal.emit(self.number)
		for addr in self.network:
			self.count = self.count + 1
			QtCore.QCoreApplication.processEvents()
			self.status = self.ping(str(addr), tries=2, timeout_include=self.option)
			if self.status == "online":
				self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
				self.result = self.sock.connect_ex((str(addr), 8291))
				if self.result == 0:
					file.write(str(addr) + "\n")
				# print("Winbox is enabled! Mikrotik found!")  # Success Message
				self.sock.close()
			self.progressSignal.emit(self.count)
		self.pCloseSignal.emit()
		file.close()

    