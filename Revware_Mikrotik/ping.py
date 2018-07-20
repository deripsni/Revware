import subprocess
from PyQt5 import QtCore


class IPTest(QtCore.QObject):

	printToScreen = QtCore.pyqtSignal(str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.printToScreen.connect(parent.parent().gui.updateStatus)

	@QtCore.pyqtSlot(str,int)
	def ping(self, ip1, tries):
		print("pinging stuff")
		self.ip = ip1

		self.max_tries = tries
		self.current_try = 0

		while self.current_try < self.max_tries:
			self.p = subprocess.Popen("ping -n 1 " + self.ip, stdout=subprocess.PIPE).communicate()[0]
			#print(p.decode("utf-8")) 		#display ping results
			if b"unreachable" in self.p:
				print(".", end="", flush=True)
			elif b"timed out" in self.p:
				print(".", end="", flush=True)
			else:
				x= "%s online \n" % self.ip
				self.printToScreen.emit(x)
				QtCore.QCoreApplication.processEvents()
				break

			self.current_try += 1

		else:
			print("{}{}{}".format("Radio didn't return after: ", self.max_tries, " tries."))
