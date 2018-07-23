import ssh
import menu
import sys
import time
from PyQt5.QtWidgets import QMainWindow, QPushButton, QApplication, QPlainTextEdit, QLabel, QLineEdit
from PyQt5 import QtGui, QtCore
import ctypes


myappid = 'RevWare.Mikrotik.version'
ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID(myappid)		#these lines set the taskbar icon to the window icon instead of the pythonw.exe icon

class Master(QtCore.QObject):

	firmwareSignal = QtCore.pyqtSignal(str,str,str)
	passwordSignal = QtCore.pyqtSignal(str,str,str)
	submitPassword = QtCore.pyqtSignal(str,str)
	firewallSignal = QtCore.pyqtSignal(str,str,str)

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

		self.gui = MainWindow()
		self.pwindow = Password_window()
		self.ConnectSignals()
		self.gui.show()

		print("initialized")

	def ConnectSignals(self):
		self.gui.btn1.clicked.connect(self.CreateFirmwareThread)
		self.gui.btn2.clicked.connect(self.CreatePasswordThread)
		self.gui.btn3.clicked.connect(self.CreateFirewallThread)
		self.gui.btn4.clicked.connect(menu.Password)
		self.gui.btn5.clicked.connect(menu.Firmware)
		self.gui.btn6.clicked.connect(menu.Password)
		self.gui.btn7.clicked.connect(menu.Firmware)
		self.gui.btn8.clicked.connect(menu.Password)
		self.gui.clearbtn.clicked.connect(self.gui.clearInfo)

		self.pwindow.btn.clicked.connect(lambda: self.password.setPassword(self.pwindow.npbox.text(),self.pwindow.pbox.text()))
		self.pwindow.btn.clicked.connect(self.pwindow.close)
	def CreateFirmwareThread(self):
		self.firmware=menu.Firmware(parent=self)
		self.firmware_thread = QtCore.QThread()
		self.firmware.moveToThread(self.firmware_thread)
		self.firmware_thread.start()
		self.firmwareSignal.connect(self.firmware.runFirmware)
		#print("swag3")
		self.firmwareSignal.emit(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text())
		self.firmware_thread.exit()

	def CreatePasswordThread(self):
		print("check1")
		# if not self.password_thread:
		# 	self.password_thread.exit()
		# 	print("check")
		print("check3")
		# self.password=None
		# self.password_thread=None
		print("check4")
		self.password= menu.Password(parent=self)
		self.password_thread = QtCore.QThread()
		self.password.moveToThread(self.password_thread)
		self.password_thread.start()
		self.pwindow.show()
		self.passwordSignal.connect(self.password.runPassword)
		#print("yeet3")
		self.passwordSignal.emit(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text())
		self.password_thread.exit()

	def CreateFirewallThread(self):
		print("lit1")
		self.firewall=menu.Firewall(parent=self)
		print("lit4")
		self.firewall_thread = QtCore.QThread()
		print("lit5")
		self.firewall.moveToThread(self.firewall_thread)
		print("lit6")
		self.firewall_thread.start()
		print("lit7")
		self.firewallSignal.connect(self.firewall.runFirewall)
		print("lit3")
		self.firewallSignal.emit(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text())
		#self.firewall_thread.exit()

class Password_window(QMainWindow):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.initUI()

	def initUI(self):
		self.npbox = QLineEdit(self)
		self.npbox.move(100, 10)
		self.npbox.resize(100, 20)

		self.nplabel = QLabel('New Password: ', self)
		self.nplabel.move(21, 5)

		self.pbox = QLineEdit(self)
		self.pbox.move(100, 35)
		self.pbox.resize(100, 20)

		self.plabel = QLabel('Retype Password:', self)
		self.plabel.move(7, 30)

		self.btn = QPushButton("Submit", self)
		self.btn.move(100, 65)



		self.statusBar()

		self.setGeometry(90, 200, 220, 100)
		self.setWindowTitle('Set New Password')


	def submit(self):
		self.doneSignal.emit(self.npbox.text,self.pbox.text)

	def buttonClicked(self):
		sender = self.sender()
		self.statusBar().showMessage(sender.text() + ' was pressed')


class MainWindow(QMainWindow):
	def __init__(self):
		super().__init__()
		self.initUI()

	def initUI(self):
		self.pwindow = Password_window(parent=self)

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
		self.btn1.setAutoDefault(True)				#this sets the button to be clicked by pressing the enter key
		self.btn2 = QPushButton("Password", self)
		self.btn2.move(150, 115)
		self.btn2.setAutoDefault(True)
		self.btn3 = QPushButton("Firewall", self)
		self.btn3.move(30, 140)
		self.btn3.setAutoDefault(True)
		self.btn4 = QPushButton("Radio Name", self)
		self.btn4.move(150, 140)
		self.btn4.setAutoDefault(True)
		self.btn5 = QPushButton("Custom Command", self)
		self.btn5.move(30, 165)
		self.btn5.setAutoDefault(True)
		self.btn6 = QPushButton("Telnet", self)
		self.btn6.move(150, 165)
		self.btn6.setAutoDefault(True)
		self.btn7 = QPushButton("Batch SFTP", self)
		self.btn7.move(30, 190)
		self.btn7.setAutoDefault(True)
		self.btn8 = QPushButton("Exit", self)
		self.btn8.move(150, 190)
		self.btn8.setAutoDefault(True)

		#iupbtn = QPushButton("IUP", self)
		#iupbtn.move(150,100)

		self.textbox = QPlainTextEdit(self)
		self.textbox.setReadOnly(True)
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
	master=Master()
	sys.exit(app.exec_())