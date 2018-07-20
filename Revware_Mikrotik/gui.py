import ssh
import menu
import sys
import time
from PyQt5.QtWidgets import QMainWindow, QPushButton, QApplication, QPlainTextEdit, QLabel, QLineEdit
from PyQt5 import QtGui, QtCore



# class Input_window(QMainWindow):
# 	def __init__(self):
# 		super().__init__()
#
# 		self.initUI()

	# def initUI(self):
	# 	ipbox = QLineEdit(self)
	# 	ipbox.move(60, 10)
	# 	ipbox.resize(70, 20)
	#
	# 	iplabel = QLabel('Ip: ', self)
	# 	iplabel.move(45, 5)
	#
	# 	ubox = QLineEdit(self)
	# 	ubox.move(60, 35)
	# 	ubox.resize(70, 20)
	#
	# 	ulabel = QLabel('Username: ', self)
	# 	ulabel.move(5, 30)
	#
	# 	pbox = QLineEdit(self)
	# 	pbox.move(60, 60)
	# 	pbox.resize(70, 20)
	#
	# 	plabel = QLabel('Password:', self)
	# 	plabel.move(5, 55)
	#
	# 	btn = QPushButton("Submit", self)
	# 	btn.move(30, 85)
	#
	# 	btn.clicked.connect(self.submit)
	#
	#
	# 	self.oktosend=0
	# 	self.statusBar()
	#
	# 	self.setGeometry(90, 200, 150, 150)
	# 	self.setWindowTitle('Revware Mikrotik Control')
	# 	self.show()
	#
	# def submit(self):
	# 	self.oktosend=1
	# 	self.hide()
	#
	# def buttonClicked(self):
	# 	sender = self.sender()
	# 	self.statusBar().showMessage(sender.text() + ' was pressed')
	#
	# def SendParameters(self):
	# 	while self.oktosend != 1:
	# 		print("wait")
	# 		QApplication.processEvents()
	# 	params = []
	# 	params.append(self.ipbox.text)
	# 	params.append(self.ubox.text)
	# 	params.append(self.pbox.text)
	# 	print("parameters sent")
	# 	return params



class Example(QtCore.QObject):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.gui = MainWindow()

		self.CreateFirmwareThread()

		self.ConnectSignals()

		self.gui.show()

		print("initialized")

	def ConnectSignals(self):

		self.gui.btn2.clicked.connect(menu.Password)
		self.gui.btn3.clicked.connect(menu.Firmware)
		self.gui.btn4.clicked.connect(menu.Password)
		self.gui.btn5.clicked.connect(menu.Firmware)
		self.gui.btn6.clicked.connect(menu.Password)
		self.gui.btn7.clicked.connect(menu.Firmware)
		self.gui.btn8.clicked.connect(menu.Password)
		self.gui.clearbtn.clicked.connect(self.gui.clearInfo)

	def CreateFirmwareThread(self):
		self.firmware=menu.Firmware(parent=self)
		self.firmware_thread = QtCore.QThread()
		self.firmware.moveToThread(self.firmware_thread)
		self.firmware_thread.start()

		self.gui.btn1.clicked.connect(lambda: self.firmware.runFirmware(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text()))

		#self.thread.start()



class MainWindow(QMainWindow):
	def __init__(self):
		super().__init__()

		self.initUI()

	def initUI(self):
		self.ipbox = QLineEdit(self)
		self.ipbox.move(60, 10)
		self.ipbox.resize(200, 20)

		self.iplabel = QLabel('Ip: ', self)
		self.iplabel.move(43, 5)

		self.ubox = QLineEdit(self)
		self.ubox.move(60, 35)
		self.ubox.resize(200, 20)

		self.ulabel = QLabel('Username: ', self)
		self.ulabel.move(5, 30)

		self.pbox = QLineEdit(self)
		self.pbox.setEchoMode(QLineEdit.Password)
		self.pbox.move(60, 60)
		self.pbox.resize(200, 20)

		self.plabel = QLabel('Password:', self)
		self.plabel.move(7, 55)

		self.clearbtn = QPushButton("Clear", self)
		self.clearbtn.resize(50,20)
		self.clearbtn.move(200, 85)

		self.btn1 = QPushButton("Firmware", self)
		self.btn1.move(30, 115)
		self.btn2 = QPushButton("Password", self)
		self.btn2.move(150, 115)
		self.btn3 = QPushButton("Firewall", self)
		self.btn3.move(30, 140)
		self.	btn4 = QPushButton("Radio Name", self)
		self.btn4.move(150, 140)
		self.btn5 = QPushButton("Custom Command", self)
		self.btn5.move(30, 165)
		self.btn6 = QPushButton("Telnet", self)
		self.btn6.move(150, 165)
		self.btn7 = QPushButton("Batch SFTP", self)
		self.btn7.move(30, 190)
		self.btn8 = QPushButton("Exit", self)
		self.btn8.move(150, 190)

		#iupbtn = QPushButton("IUP", self)
		#iupbtn.move(150,100)

		self.textbox = QPlainTextEdit(self)
		self.textbox.move(40, 250)
		self.textbox.resize(200, 130)

		self.statusBar()
		self.setGeometry(0, 0, 290, 400)
		self.setWindowTitle('Revware Mikrotik Control')

	@QtCore.pyqtSlot()
	def clearInfo(self):
		self.ipbox.setText('')
		self.ubox.setText('')
		self.pbox.setText('')

	@QtCore.pyqtSlot(str)
	def updateStatus(self, status):
		self.textbox.appendPlainText(status)
		print(status)

if __name__ == '__main__':
	app = QApplication(sys.argv)
	app.setWindowIcon(QtGui.QIcon('Logo.PNG'))
	ex=Example()
	sys.exit(app.exec_())