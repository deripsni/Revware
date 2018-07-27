import ssh
import menu
import sys
import time
from PyQt5.QtWidgets import QMainWindow, QPushButton, QApplication, QPlainTextEdit, QLabel, QLineEdit, QFileDialog, QRadioButton, QCheckBox, QProgressBar
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

	mikroSignal = QtCore.pyqtSignal(str,str,str)

	# Makes the program display silent exceptions for debugging
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
		self.mwindow = Mikro_window()
		self.progresswindow = Progress_window()
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
		self.gui.btn8.clicked.connect(self.CreateMikroThread)

		self.gui.clearbtn.clicked.connect(self.gui.clearInfo)

		self.pwindow.btn.clicked.connect(lambda: self.password.setPassword(self.pwindow.npbox.text(),self.pwindow.pbox.text()))
		self.pwindow.btn.clicked.connect(self.pwindow.close)

		self.cwindow.btn.clicked.connect(lambda: self.command.setCommand(self.cwindow.cbox.text()))
		self.cwindow.btn.clicked.connect(self.cwindow.close)

		self.bwindow.cbtn.clicked.connect(self.bwindow.cSet)
		self.bwindow.ipbtn.clicked.connect(self.bwindow.iSet)
		self.bwindow.btn.clicked.connect(lambda: self.batch.setBatchSFTP(self.bwindow.ctxt.text(), self.bwindow.iptxt.text()))
		self.bwindow.btn.clicked.connect(self.bwindow.close)

		self.twindow.sshbtn.clicked.connect(self.twindow.close)
		self.twindow.sshbtn.clicked.connect(lambda: self.telnet.setTelnet("ssh"))
		self.twindow.ftpbtn.clicked.connect(lambda: self.telnet.setTelnet("ftp"))
		self.twindow.ftpbtn.clicked.connect(self.twindow.close)
		self.twindow.winbtn.clicked.connect(lambda: self.telnet.setTelnet("winbox"))
		self.twindow.winbtn.clicked.connect(self.twindow.close)

		self.mwindow.btn.clicked.connect(self.mwindow.close)
		self.mwindow.btn.clicked.connect(self.progresswindow.show)
		self.mwindow.btn.clicked.connect(lambda: self.mikro.setMikro(self.mwindow.ibox.text(), self.mwindow.sbox.text(), self.mwindow.b1.isChecked()))

		#self.mwindow.btn.clicked.connect(self.mwindow.close)

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

	def CreateMikroThread(self):
		self.mikro= menu.Mikrotik(parent=self)
		self.mikro_thread = QtCore.QThread()
		self.mikro.moveToThread(self.mikro_thread)
		self.mikro_thread.start()
		self.mwindow.show()
		self.mikroSignal.connect(self.mikro.runMikro)
		self.mikroSignal.emit(self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text())
		self.mikro_thread.exit()

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
		self.nplabel.resize(70,30)

		self.pbox = QLineEdit(self)
		self.pbox.move(100, 35)
		self.pbox.resize(100, 20)

		self.plabel = QLabel('Retype Password:', self)
		self.plabel.move(7, 30)
		self.plabel.resize(90,30)

		self.btn = QPushButton("Submit", self)
		self.btn.move(100, 65)
		self.btn.setAutoDefault(True)

		self.statusBar()

		self.setGeometry(90, 200, 220, 120)
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

class Mikro_window(QMainWindow):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.initUI()

	def initUI(self):
		self.ibox = QLineEdit(self)
		self.ibox.move(100, 10)
		self.ibox.resize(100, 20)

		self.ilabel = QLabel('Base Ip: ', self)
		self.ilabel.move(21, 5)

		self.sbox = QLineEdit(self)
		self.sbox.move(100, 35)
		self.sbox.resize(100, 20)

		self.slabel = QLabel('Subnet Mask:', self)
		self.slabel.move(7, 30)

		self.b1 = QCheckBox("Include Timed Out Devices")
		self.b1.setChecked(False)
		self.b1.move(5, 65)
		self.b1.resize(100,20)

		self.btn = QPushButton("Submit", self)
		self.btn.move(100, 65)
		self.btn.setAutoDefault(True)



		self.statusBar()

		self.setGeometry(90, 200, 220, 100)
		self.setWindowTitle('Polling Information')

class Progress_window(QMainWindow):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.initUI()

	def initUI(self):
		self.label = QLabel('Working...', self)
		self.label.resize(200,30)
		self.label.move(60, 5)

		self.pbar = QProgressBar(self)
		self.pbar.move(40, 35)
		self.pbar.resize(200,20)
		self.pbar.setMinimum(0)

		self.statusBar()

		self.setGeometry(90, 200, 300, 80)
		self.setWindowTitle('Enable Protocol')

	@QtCore.pyqtSlot(int)
	def updateProgress(self, value):
		self.pbar.setValue(value)

	@QtCore.pyqtSlot(int)
	def setMax(self, value):
		self.pbar.setMaximum(value)

class MainWindow(QMainWindow):
	def __init__(self):
		super().__init__()
		self.initUI()

	def initUI(self):

		mainMenu = self.menuBar()
		fileMenu = mainMenu.addMenu('File')
		editMenu = mainMenu.addMenu('Edit')
		viewMenu = mainMenu.addMenu('View')
		searchMenu = mainMenu.addMenu('Search')
		toolsMenu = mainMenu.addMenu('Tools')
		helpMenu = mainMenu.addMenu('Help')


		self.ipbox = QLineEdit(self)
		self.ipbox.move(80, 30)
		self.ipbox.resize(170, 20)

		self.iplabel = QLabel('Ip: ', self)
		self.iplabel.move(63, 23)
		self.iplabel.resize(15,30)

		self.ubox = QLineEdit(self)
		self.ubox.move(80, 55)
		self.ubox.resize(170, 20)

		self.ulabel = QLabel('Username: ', self)
		self.ulabel.move(25, 48)
		self.ulabel.resize(50,30)

		self.pbox = QLineEdit(self)
		self.pbox.setEchoMode(QLineEdit.Password)
		self.pbox.move(80, 80)
		self.pbox.resize(170, 20)

		self.plabel = QLabel('Password:', self)
		self.plabel.move(27, 78)
		self.plabel.resize(50, 20)

		self.clearbtn = QPushButton("Clear", self)
		self.clearbtn.resize(50,20)
		self.clearbtn.move(200, 105)


		self.btn1 = QPushButton("Firmware", self)
		self.btn1.move(20, 135)
		self.btn1.resize(100,30)
		self.btn1.setAutoDefault(True)

		self.btn2 = QPushButton("Password", self)
		self.btn2.move(150, 135)
		self.btn1.resize(100, 30)
		self.btn2.setAutoDefault(True)

		self.btn3 = QPushButton("Firewall", self)
		self.btn3.move(20, 170)
		self.btn1.resize(100, 30)
		self.btn3.setAutoDefault(True)

		self.btn4 = QPushButton("Radio Name", self)
		self.btn4.move(150, 170)
		self.btn1.resize(100, 30)
		self.btn4.setAutoDefault(True)

		self.btn5 = QPushButton("Custom Command", self)
		self.btn5.move(20, 205)
		self.btn1.resize(100, 30)
		self.btn5.setAutoDefault(True)

		self.btn6 = QPushButton("Telnet", self)
		self.btn6.move(150, 205)
		self.btn1.resize(100, 30)
		self.btn6.setAutoDefault(True)

		self.btn7 = QPushButton("Batch SFTP", self)
		self.btn7.move(20, 240)
		self.btn1.resize(100, 30)
		self.btn7.setAutoDefault(True)

		self.btn8 = QPushButton("Mikro Checker", self)
		self.btn8.move(150, 240)
		self.btn1.resize(100, 30)
		self.btn8.setAutoDefault(True)

		#iupbtn = QPushButton("IUP", self)
		#iupbtn.move(150,100)

		self.textbox = QPlainTextEdit(self)
		self.textbox.setReadOnly(True)
		self.textbox.move(20, 290)
		self.textbox.resize(230, 130)

		self.statusBar()
		self.setGeometry(0, 0, 270, 440)
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

	with open('StyleSheet2.qss', 'r') as myfile:
		data = myfile.read()

	app.setStyleSheet(data)
	app.setWindowIcon(QtGui.QIcon('Logo.PNG'))

	master=Master()
	sys.exit(app.exec_())