import ssh
import menu
import sys
import time
from PyQt5.QtWidgets import QMainWindow, QPushButton, QApplication, QPlainTextEdit, QLabel, QLineEdit, QFileDialog
from PyQt5 import QtGui, QtCore
import ctypes


myappid = 'RevWare.Mikrotik.version'
ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID(myappid)		#these lines set the taskbar icon to the window icon instead of the pythonw.exe icon

class Master(QtCore.QObject):

	firmwareSignal = QtCore.pyqtSignal(str,str,str)

	passwordSignal = QtCore.pyqtSignal(str,str,str)
	submitPassword = QtCore.pyqtSignal(str,str)

	firewallSignal = QtCore.pyqtSignal(str,str,str)

	devicenameSignal = QtCore.pyqtSignal(str,str,str)

	commandSignal = QtCore.pyqtSignal(str, str, str)
	submitCommand = QtCore.pyqtSignal(str)

	batchSignal = QtCore.pyqtSignal(str,str)
	cSend = QtCore.pyqtSignal(str)
	iSend = QtCore.pyqtSignal(str)

	telnetSignal = QtCore.pyqtSignal(str,str,str)
	# Makes the program output silent exceptions for debugging
	sys._excepthook = sys.excepthook
	def exception_hook(exctype, value, traceback):
		print(exctype, value, traceback)
		sys._excepthook(exctype, value, traceback)
		sys.exit(1)
	sys.excepthook = exception_hook
	#########################################################

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

		self.gui = MainWindow()
		self.pwindow = Password_window()
		self.cwindow = Command_window()
		self.bwindow = BatchSFTP_Window()
		self.twindow = Telnet_window()
		self.ConnectSignals()
		self.gui.show()

		print("initialized")

	def ConnectSignals(self):
		self.gui.btn1.clicked.connect(self.CreateFirmwareThread)
		self.gui.btn2.clicked.connect(self.CreatePasswordThread)
		self.gui.btn3.clicked.connect(self.CreateFirewallThread)
		self.gui.btn4.clicked.connect(self.CreateDeviceNameThread)
		self.gui.btn5.clicked.connect(self.CreateCustomCommandThread)
		self.gui.btn6.clicked.connect(self.CreateTelnetThread)
		self.gui.btn7.clicked.connect(self.CreateBatchThread)
		self.gui.btn8.clicked.connect(menu.Password)
		self.gui.clearbtn.clicked.connect(self.gui.clearInfo)

		self.pwindow.btn.clicked.connect(lambda: self.password.setPassword(self.pwindow.npbox.text(),self.pwindow.pbox.text()))
		self.pwindow.btn.clicked.connect(self.pwindow.close)

		self.cwindow.btn.clicked.connect(lambda: self.command.setCommand(self.cwindow.cbox.text()))
		self.cwindow.btn.clicked.connect(self.cwindow.close)

		self.bwindow.cbtn.clicked.connect(self.bwindow.cSet)
		self.bwindow.ipbtn.clicked.connect(self.bwindow.iSet)
		self.bwindow.btn.clicked.connect(lambda: self.batch.setBatchSFTP(self.bwindow.ctxt.text(), self.bwindow.iptxt.text()))
		self.bwindow.btn.clicked.connect(self.bwindow.close)
	def CreateFirmwareThread(self):
		self.firmware=menu.Firmware(parent=self)
		self.firmware_thread = QtCore.QThread()
		self.firmware.moveToThread(self.firmware_thread)
		self.firmware_thread.start()
		self.firmwareSignal.connect(self.firmware.runFirmware)
		self.firmwareSignal.emit(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text())
		self.firmware_thread.exit()

	def CreatePasswordThread(self):
		self.password= menu.Password(parent=self)
		self.password_thread = QtCore.QThread()
		self.password.moveToThread(self.password_thread)
		self.password_thread.start()
		self.pwindow.show()
		self.passwordSignal.connect(self.password.runPassword)
		self.passwordSignal.emit(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text())
		self.password_thread.exit()

	def CreateFirewallThread(self):
		self.firewall=menu.Firewall(parent=self)
		self.firewall_thread = QtCore.QThread()
		self.firewall.moveToThread(self.firewall_thread)
		self.firewall_thread.start()
		self.firewallSignal.connect(self.firewall.runFirewall)
		self.firewallSignal.emit(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text())
		self.firewall_thread.exit()

	def CreateDeviceNameThread(self):
		self.devicename=menu.DeviceName(parent=self)
		self.devicename_thread = QtCore.QThread()
		self.devicename.moveToThread(self.devicename_thread)
		self.devicename_thread.start()
		self.devicenameSignal.connect(self.devicename.runDeviceName)
		self.devicenameSignal.emit(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text())
		self.devicename_thread.exit()

	def CreateCustomCommandThread(self):
		self.command= menu.CustomCommand(parent=self)
		self.command_thread = QtCore.QThread()
		self.command.moveToThread(self.command_thread)
		self.command_thread.start()
		self.cwindow.show()
		self.commandSignal.connect(self.command.runCustomCommand)
		self.commandSignal.emit(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text())
		self.command_thread.exit()

	def CreateBatchThread(self):
		self.batch= menu.BatchSFTP(parent=self)
		self.batch_thread = QtCore.QThread()
		self.batch.moveToThread(self.batch_thread)
		self.batch_thread.start()
		self.bwindow.show()
		self.batchSignal.connect(self.batch.runBatchSFTP)
		self.batchSignal.emit(self.gui.ubox.text(), self.gui.pbox.text())
		self.batch_thread.exit()

	def CreateTelnetThread(self):
		self.telnet= menu.Telnet(parent=self)
		self.telnet_thread = QtCore.QThread()
		self.telnet.moveToThread(self.telnet_thread)
		self.telnet_thread.start()
		self.twindow.show()
		self.telnetSignal.connect(self.telnet.runTelnet)
		self.telnetSignal.emit(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text())
		self.telnet_thread.exit()

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
		self.btn.setAutoDefault(True)

		self.statusBar()

		self.setGeometry(90, 200, 220, 100)
		self.setWindowTitle('Set New Password')


class Command_window(QMainWindow):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.initUI()

	def initUI(self):
		self.cbox = QLineEdit(self)
		self.cbox.move(105, 10)
		self.cbox.resize(200, 20)

		self.clabel = QLabel('Custom Command: ', self)
		self.clabel.move(11, 5)

		self.btn = QPushButton("Submit", self)
		self.btn.move(200, 35)
		self.btn.setAutoDefault(True)

		self.statusBar()

		self.setGeometry(90, 200, 320, 70)
		self.setWindowTitle('Enter Custom Command')


class BatchSFTP_Window(QMainWindow):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.initUI()

	def initUI(self):
		self.cbtn = QPushButton('Browse', self)
		self.cbtn.move(100, 10)
		self.cbtn.resize(50, 20)
		self.cbtn.setAutoDefault(True)

		self.clabel = QLabel('Command File: ', self)
		self.clabel.move(23, 5)

		self.ctxt = QLineEdit(self)
		self.ctxt.move(160, 10)
		self.ctxt.resize(250, 20)

		self.ipbtn = QPushButton('Browse', self)
		self.ipbtn.move(100, 35)
		self.ipbtn.resize(50, 20)
		self.ipbtn.setAutoDefault(True)

		self.iplabel = QLabel('IP List:', self)
		self.iplabel.move(59, 30)

		self.iptxt = QLineEdit(self)
		self.iptxt.move(160, 35)
		self.iptxt.resize(250, 20)

		self.btn = QPushButton("Submit", self)
		self.btn.move(100, 65)
		self.btn.setAutoDefault(True)

		self.statusBar()

		self.setGeometry(90, 200, 420, 100)
		self.setWindowTitle('Batch SFTP')

	def cSet(self, file):
		fname = QFileDialog.getOpenFileName(self, 'Open file', filter="Text files (*.txt)")
		self.ctxt.setText(fname[0])

	def iSet(self, file):
		fname = QFileDialog.getOpenFileName(self, 'Open file', filter="Text files (*.txt)")
		self.iptxt.setText(fname[0])

class Telnet_window(QMainWindow):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.initUI()

	def initUI(self):
		self.nplabel = QLabel('Which Protocol would you like to enable?', self)
		self.nplabel.resize(200,30)
		self.nplabel.move(60, 5)

		self.sshbtn = QPushButton("SSH", self)
		self.sshbtn.move(40, 35)
		self.sshbtn.resize(60,20)
		self.sshbtn.setAutoDefault(True)

		self.ftpbtn = QPushButton("FTP", self)
		self.ftpbtn.move(120, 35)
		self.ftpbtn.resize(60,20)
		self.ftpbtn.setAutoDefault(True)

		self.winbtn = QPushButton("Winbox", self)
		self.winbtn.move(200, 35)
		self.winbtn.resize(60,20)
		self.winbtn.setAutoDefault(True)

		self.statusBar()

		self.setGeometry(90, 200, 300, 80)
		self.setWindowTitle('Enable Protocol')



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