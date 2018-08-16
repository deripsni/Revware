import menu
import sys
from PyQt5.QtWidgets import QMainWindow, QPushButton, QApplication, QPlainTextEdit, QLabel, QLineEdit, QFileDialog, \
							QCheckBox, QProgressBar, QFormLayout, QWidget,  QVBoxLayout, \
							QTableWidget, QTableWidgetItem, QStackedWidget, QToolBar, QHBoxLayout, QBoxLayout, QScrollArea

from PyQt5 import QtGui, QtCore
import ctypes
import sftp
from yaml import load, dump

myappid = 'RevWare.Mikrotik.version'
ctypes.windll.shell32.SetCurrentProcessExplicitAppUserModelID(myappid)
# these lines set the taskbar icon to the window icon instead of the pythonw.exe icon


class Master(QtCore.QObject):

	firmwareSignal = QtCore.pyqtSignal(str, str, str)

	passwordSignal = QtCore.pyqtSignal(str, str, str)
	submitPassword = QtCore.pyqtSignal(str, str)

	firewallSignal = QtCore.pyqtSignal(str, str, str)

	devicenameSignal = QtCore.pyqtSignal(str, str, str)

	commandSignal = QtCore.pyqtSignal(str, str, str)
	submitCommand = QtCore.pyqtSignal(str)

	batchSignal = QtCore.pyqtSignal(str, str)
	cSend = QtCore.pyqtSignal(str)
	iSend = QtCore.pyqtSignal(str)

	telnetSignal = QtCore.pyqtSignal(str, str, str)

	mikroSignal = QtCore.pyqtSignal(str, str, str)

	# Makes the program display silent exceptions for debugging
	sys._excepthook = sys.excepthook

	def exception_hook(exctype, value, traceback):
		print(exctype, value, traceback)
		sys.excepthook(exctype, value, traceback)
		sys.exit(1)
	sys.excepthook = exception_hook
	#########################################################

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		with open('settings.yaml', 'r') as f:
			self.settings = load(f)
		print(self.settings)

		try:
			self.theme = self.settings["defaultTheme"]
			with open(self.theme, 'r') as myfile:
				self.theme = myfile.read()
		except FileNotFoundError:
			pass

		app.setStyleSheet(self.theme)
		app.setWindowIcon(QtGui.QIcon('Logo.PNG'))

		self.gui = MainWindow()
		self.fwindow = FirmwareWindow()
		self.pwindow = PasswordWindow()
		self.cwindow = CommandWindow()
		self.batchpasswordwindow = BatchPasswordWindow()
		self.batchfirmwarewindow = BatchFirmwareWindow()
		self.batchfirewallwindow = BatchFirewallWindow()
		self.batchmenuwindow = BatchMenu()
		self.batchstackwindow = BatchStack(
											firmware=self.batchfirmwarewindow, menu=self.batchmenuwindow,
											password=self.batchpasswordwindow, firewall=self.batchfirewallwindow)
		self.twindow = TelnetWindow()
		self.mwindow = MikroWindow()
		self.progresswindow = ProgressWindow()
		self.settingswindow = SettingsWindow()
		self.swindow = StatusWindow()
		self.batchfirmwareexecutewindow = BatchExecuteWindow()
		self.batchpasswordexecutewindow = BatchExecuteWindow()
		self.batchfirewallexecutewindow = BatchExecuteWindow()
		self.connect_signals()
		self.gui.show()

		self.fill_settings()

		print("initialized")

	def fill_settings(self):
		# print(self.settings["defaultUsername"])
		self.gui.ubox.setText(self.settings["defaultUsername"])

		self.gui.pbox.setText(self.settings["defaultPassword"])

		self.pwindow.pbox.setText(self.settings["defaultNewPassword"])
		self.pwindow.npbox.setText(self.settings["defaultNewPassword"])
		self.batchpasswordwindow.pbox.setText(self.settings["defaultNewPassword"])
		self.batchpasswordwindow.npbox.setText(self.settings["defaultNewPassword"])

		self.fwindow.ftxt.setText(self.settings["defaultFirmwareLocation"])
		self.batchfirmwarewindow.ctxt.setText(self.settings["defaultFirmwareLocation"])

		self.batchfirmwarewindow.iptxt.setText(self.settings["defaultIPListLocation"])
		self.batchpasswordwindow.iptxt.setText(self.settings["defaultIPListLocation"])

		self.settingswindow.b1.setText(self.settings["defaultUsername"])
		self.settingswindow.b2.setText(self.settings["defaultPassword"])
		self.settingswindow.b3.setText(self.settings["defaultNewPassword"])
		self.settingswindow.b4_2.setText(self.settings["defaultFirmwareLocation"])
		self.settingswindow.b5_2.setText(self.settings["defaultIPListLocation"])

	def connect_signals(self):
		self.gui.btn1.clicked.connect(self.fwindow.show)
		self.gui.btn2.clicked.connect(self.pwindow.show)
		self.gui.btn3.clicked.connect(self.create_firewall_thread)
		self.gui.btn4.clicked.connect(self.create_device_name_thread)
		self.gui.btn5.clicked.connect(self.cwindow.show)
		self.gui.btn6.clicked.connect(self.twindow.show)
		self.gui.btn7.clicked.connect(self.batchstackwindow.show)
		self.gui.btn7.clicked.connect(lambda: self.batchstackwindow.setCurrentIndex(0))
		self.gui.btn8.clicked.connect(self.mwindow.reset)

		self.gui.clearbtn.clicked.connect(self.gui.clear_info)

		self.fwindow.fbtn.clicked.connect(self.fwindow.f_set)
		self.fwindow.btn.clicked.connect(lambda: self.gui.pbar.setVisible(True))
		self.fwindow.btn.clicked.connect(self.create_firmware_thread)
		self.fwindow.btn.clicked.connect(self.fwindow.close)

		self.pwindow.btn.clicked.connect(self.create_password_thread)
		self.pwindow.btn.clicked.connect(self.pwindow.close)

		self.cwindow.btn.clicked.connect(self.create_custom_command_thread)
		self.cwindow.btn.clicked.connect(self.cwindow.close)

		self.batchmenuwindow.fbtn.clicked.connect(lambda: self.batchstackwindow.setCurrentIndex(1))
		self.batchmenuwindow.pbtn.clicked.connect(lambda: self.batchstackwindow.setCurrentIndex(2))
		self.batchmenuwindow.abtn.clicked.connect(lambda: self.batchstackwindow.setCurrentIndex(3))

		self.batchfirmwarewindow.cbtn.clicked.connect(self.batchfirmwarewindow.c_set)
		self.batchfirmwarewindow.ipbtn.clicked.connect(self.batchfirmwarewindow.i_set)
		self.batchfirmwarewindow.btn.clicked.connect(self.create_batch_firmware_setup_thread)
		self.batchfirmwarewindow.btn.clicked.connect(self.batchstackwindow.close)
		self.batchfirmwarewindow.btn.clicked.connect(self.swindow.show)

		self.batchpasswordwindow.btn.clicked.connect(self.create_batch_password_setup_thread)
		self.batchpasswordwindow.btn.clicked.connect(self.batchstackwindow.close)
		self.batchpasswordwindow.btn.clicked.connect(self.swindow.show)
		self.batchpasswordwindow.ipbtn.clicked.connect(self.batchpasswordwindow.i_set)

		self.batchfirewallwindow.btn.clicked.connect(self.create_batch_firewall_setup_thread)
		self.batchfirewallwindow.btn.clicked.connect(self.batchstackwindow.close)
		self.batchfirewallwindow.btn.clicked.connect(self.swindow.show)
		self.batchfirewallwindow.ipbtn.clicked.connect(self.batchfirewallwindow.i_set)

		self.batchfirmwareexecutewindow.btn.clicked.connect(self.create_batch_firmware_execute_thread)
		self.batchfirmwareexecutewindow.btn.clicked.connect(self.batchfirmwareexecutewindow.close)

		self.batchpasswordexecutewindow.btn.clicked.connect(self.create_batch_password_execute_thread)
		self.batchpasswordexecutewindow.btn.clicked.connect(self.batchpasswordexecutewindow.close)

		self.batchfirewallexecutewindow.btn.clicked.connect(self.create_batch_firewall_execute_thread)
		self.batchfirewallexecutewindow.btn.clicked.connect(self.batchfirewallexecutewindow.close)

		self.twindow.sshbtn.clicked.connect(lambda: self.create_telnet_thread("ssh"))
		self.twindow.sshbtn.clicked.connect(self.twindow.close)
		self.twindow.ftpbtn.clicked.connect(lambda: self.create_telnet_thread("ftp"))
		self.twindow.ftpbtn.clicked.connect(self.twindow.close)
		self.twindow.winbtn.clicked.connect(lambda: self.create_telnet_thread("winbox"))
		self.twindow.winbtn.clicked.connect(self.twindow.close)
		self.twindow.apibtn.clicked.connect(lambda: self.create_telnet_thread("api"))
		self.twindow.apibtn.clicked.connect(self.twindow.close)

		self.mwindow.btn.clicked.connect(self.create_mikro_thread)
		self.mwindow.btn.clicked.connect(lambda: self.gui.pbar.setVisible(True))
		self.mwindow.btn.clicked.connect(self.mwindow.close)

		self.gui.settingsAction.triggered.connect(self.settingswindow.show)

	def create_firmware_thread(self):
		self.fwindow.show()
		self.firmware_thread = menu.Firmware(
											self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text(),
											self.fwindow.ftxt.text(), parent=self)
		self.firmware_thread.start()

	def create_password_thread(self):
		self.password_thread = menu.Password(
											self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text(),
											self.pwindow.pbox.text(), self.pwindow.npbox.text(), parent=self)
		self.password_thread.start()

	def create_firewall_thread(self):

		self.firewall_thread = menu.Firewall(
											self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text(),
											parent=self)
		self.firewall_thread.start()

	def create_device_name_thread(self):
		self.device_name_thread = menu.DeviceName(
												self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text(),
												parent=self)
		self.device_name_thread.start()

	def create_custom_command_thread(self):

		self.command_thread = menu.CustomCommand(
												self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text(),
												self.cwindow.cbox.text(), parent=self)

		self.command_thread.start()

	def create_batch_firmware_setup_thread(self):
		self.batch_setup_thread = menu.BatchFirmwareSetup(
														self.gui.ubox.text(), self.gui.pbox.text(), self.batchfirmwarewindow.ctxt.text(),
														self.batchfirmwarewindow.iptxt.text(), parent=self)
		self.batch_setup_thread.start()

	def create_batch_password_setup_thread(self):
		self.batch_setup_thread = menu.BatchPasswordSetup(
														self.gui.ubox.text(), self.gui.pbox.text(), self.batchpasswordwindow.pbox.text(),
														self.batchpasswordwindow.npbox.text(), ifile=self.batchpasswordwindow.iptxt.text(),
														parent=self)
		self.batch_setup_thread.start()

	def create_batch_firewall_setup_thread(self):
		self.batch_setup_thread = menu.BatchFirewallSetup(
														self.gui.ubox.text(), self.gui.pbox.text(), ifile=self.batchpasswordwindow.iptxt.text(),
														parent=self)
		self.batch_setup_thread.start()

	def create_batch_firmware_execute_thread(self):
		self.batch_setup_thread = menu.BatchFirmwareExecute(
															self.gui.ubox.text(), self.gui.pbox.text(), self.batchfirmwarewindow.ctxt.text(),
															self.batchfirmwarewindow.iptxt.text(), self.obj, parent=self)
		self.batch_setup_thread.start()

	def create_batch_password_execute_thread(self):
		self.batch_setup_thread = menu.BatchPasswordExecute(
															self.gui.ubox.text(), self.gui.pbox.text(),
															self.batchpasswordwindow.npbox.text(), self.obj, parent=self)
		self.batch_setup_thread.start()

	def create_batch_firewall_execute_thread(self):
		self.batch_setup_thread = menu.BatchFirewallExecute(
															self.gui.ubox.text(), self.gui.pbox.text(),
															self.obj, parent=self)
		self.batch_setup_thread.start()

	def create_telnet_thread(self, method):
		self.telnet_thread = menu.Telnet(
										self.gui.ipbox.text(), self.gui.ubox.text(), self.gui.pbox.text(),
										method, parent=self)
		self.telnet_thread.start()

	def create_mikro_thread(self):

		self.baselist = []
		self.subnetlist = []

		for i in self.mwindow.baselist:
			self.baselist.append(i.text())

		for i in self.mwindow.subnetlist:
			self.subnetlist.append(i.text())

		print(self.baselist)
		print(self.subnetlist)
		self.mikro_thread = menu.Mikrotik(
										self.baselist, self.subnetlist,
										True, parent=self)
		self.mikro_thread.start()

	@QtCore.pyqtSlot(sftp.SFTP)
	def save_batch_object(self, obj):
		print("Object Saved")
		self.obj = obj


class FirmwareWindow(QMainWindow):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.init_ui()


	def init_ui(self):
		self.fbtn = QPushButton('Browse', self)
		self.fbtn.move(100, 10)
		self.fbtn.resize(50, 20)
		self.fbtn.setAutoDefault(True)

		self.flabel = QLabel('Firmware File: ', self)
		self.flabel.move(23, 5)
		self.flabel.resize(70, 30)

		self.ftxt = QLineEdit(self)
		self.ftxt.move(160, 10)
		self.ftxt.resize(250, 20)

		self.btn = QPushButton("Submit", self)
		self.btn.move(310, 35)
		self.btn.setAutoDefault(True)

		self.setGeometry(90, 200, 420, 70)
		self.setWindowTitle('Firmware')

		self.setWindowModality(QtCore.Qt.ApplicationModal)

	def f_set(self,):
		fname = QFileDialog.getOpenFileName(self, 'Open file')
		self.ftxt.setText(fname[0])


class PasswordWindow(QWidget):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

		self.init_ui()

	def init_ui(self):
		self.npbox = QLineEdit(self)
		self.npbox.move(100, 10)
		self.npbox.resize(100, 20)

		self.nplabel = QLabel('New Password: ', self)
		self.nplabel.move(21, 5)
		self.nplabel.resize(70, 30)

		self.pbox = QLineEdit(self)
		self.pbox.move(100, 35)
		self.pbox.resize(100, 20)

		self.plabel = QLabel('Retype Password:', self)
		self.plabel.move(7, 30)
		self.plabel.resize(90, 30)

		self.btn = QPushButton("Submit", self)
		self.btn.move(100, 65)
		self.btn.setAutoDefault(True)

		# self.statusBar()

		self.setGeometry(90, 200, 220, 120)
		self.setWindowTitle('Set New Password')

		self.setWindowModality(QtCore.Qt.ApplicationModal)


class CommandWindow(QMainWindow):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.init_ui()

	def init_ui(self):
		self.cbox = QLineEdit(self)
		self.cbox.move(105, 10)
		self.cbox.resize(200, 20)

		self.clabel = QLabel('Custom Command: ', self)
		self.clabel.move(11, 5)
		self.clabel.resize(90, 30)

		self.btn = QPushButton("Submit", self)
		self.btn.move(200, 35)
		self.btn.setAutoDefault(True)

		self.statusBar()

		self.setGeometry(90, 200, 320, 90)
		self.setWindowTitle('Enter Custom Command')

		self.setWindowModality(QtCore.Qt.ApplicationModal)


class BatchStack(QStackedWidget):

	def __init__(self, parent=None, firmware=None, menu=None, password=None, firewall=None):
		super(self.__class__, self).__init__(parent)
		self.addWidget(menu)
		self.addWidget(firmware)
		self.addWidget(password)
		self.addWidget(firewall)
		self.init_ui()

	def init_ui(self):
		# self.addWidget(parent().batchfirwmarewindow)
		self.setGeometry(90, 200, 420, 120)
		self.setWindowTitle('Batch SFTP')
		pass


class BatchMenu(QWidget):
	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.init_ui()

	def init_ui(self):
		self.fbtn = QPushButton('Firmware', self)
		self.fbtn.move(55, 35)
		self.fbtn.resize(100, 50)
		self.fbtn.setAutoDefault(True)

		self.pbtn = QPushButton('Password', self)
		self.pbtn.move(160, 35)
		self.pbtn.resize(100, 50)
		self.pbtn.setAutoDefault(True)

		self.abtn = QPushButton('Firewall', self)
		self.abtn.move(265, 35)
		self.abtn.resize(100, 50)
		self.abtn.setAutoDefault(True)

		self.setGeometry(90, 200, 420, 120)
		self.setWindowTitle('Batch SFTP')

		self.setWindowModality(QtCore.Qt.ApplicationModal)


class BatchFirmwareWindow(QWidget):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.init_ui()

	def init_ui(self):

		self.cbtn = QPushButton('Browse', self)
		self.cbtn.move(100, 10)
		self.cbtn.resize(50, 20)
		self.cbtn.setAutoDefault(True)

		self.clabel = QLabel('Firmware File: ', self)
		self.clabel.move(23, 5)
		self.clabel.resize(70, 30)

		self.ctxt = QLineEdit(self)
		self.ctxt.move(160, 10)
		self.ctxt.resize(250, 20)

		self.ipbtn = QPushButton('Browse', self)
		self.ipbtn.move(100, 35)
		self.ipbtn.resize(50, 20)
		self.ipbtn.setAutoDefault(True)

		self.iplabel = QLabel('IP List:', self)
		self.iplabel.move(59, 30)
		self.iplabel.resize(40, 30)

		self.iptxt = QLineEdit(self)
		self.iptxt.move(160, 35)
		self.iptxt.resize(250, 20)

		self.btn = QPushButton("Submit", self)
		self.btn.move(360, 65)
		self.btn.resize(50, 20)
		self.btn.setAutoDefault(True)

		self.firmwarebtn = QPushButton('Firmware')
		self.firmwarebtn.move(100, 60)
		self.firmwarebtn.resize(50, 20)
		self.firmwarebtn.setAutoDefault(True)

		self.passwordbtn = QPushButton('Password')
		self.passwordbtn.move(100, 85)
		self.passwordbtn.resize(50, 20)
		self.passwordbtn.setAutoDefault(True)

# 		self.statusBar()

		self.setGeometry(90, 200, 420, 120)
		self.setWindowTitle('Batch SFTP')

		self.setWindowModality(QtCore.Qt.ApplicationModal)

	def c_set(self,):
		fname = QFileDialog.getOpenFileName(self, 'Open file')
		self.ctxt.setText(fname[0])

	def i_set(self,):
		fname = QFileDialog.getOpenFileName(self, 'Open file', filter="Text files (*.txt)")
		self.iptxt.setText(fname[0])


class BatchPasswordWindow(QWidget):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

		self.init_ui()

	def init_ui(self):
		self.npbox = QLineEdit(self)
		self.npbox.move(100, 10)
		self.npbox.resize(310, 20)

		self.nplabel = QLabel('New Password: ', self)
		self.nplabel.move(21, 5)
		self.nplabel.resize(75, 30)

		self.pbox = QLineEdit(self)
		self.pbox.move(100, 35)
		self.pbox.resize(310, 20)

		self.plabel = QLabel('Retype Password:', self)
		self.plabel.move(7, 30)
		self.plabel.resize(90, 30)

		self.ipbtn = QPushButton('Browse', self)
		self.ipbtn.move(100, 60)
		self.ipbtn.resize(50, 20)
		self.ipbtn.setAutoDefault(True)

		self.iplabel = QLabel('IP List:', self)
		self.iplabel.move(59, 55)
		self.iplabel.resize(40, 30)

		self.iptxt = QLineEdit(self)
		self.iptxt.move(160, 60)
		self.iptxt.resize(250, 20)

		self.btn = QPushButton("Submit", self)
		self.btn.move(360, 85)
		self.btn.resize(50, 20)
		self.btn.setAutoDefault(True)

		# self.statusBar()

		self.setGeometry(90, 200, 220, 120)
		self.setWindowTitle('Set New Password')

		self.setWindowModality(QtCore.Qt.ApplicationModal)

	def i_set(self, ):
		fname = QFileDialog.getOpenFileName(self, 'Open file', filter="Text files (*.txt)")
		self.iptxt.setText(fname[0])


class BatchFirewallWindow(QWidget):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)

		self.init_ui()

	def init_ui(self):
		self.ipbtn = QPushButton('Browse', self)
		self.ipbtn.move(100, 60)
		self.ipbtn.resize(50, 20)
		self.ipbtn.setAutoDefault(True)

		self.iplabel = QLabel('IP List:', self)
		self.iplabel.move(59, 55)
		self.iplabel.resize(40, 30)

		self.iptxt = QLineEdit(self)
		self.iptxt.move(160, 60)
		self.iptxt.resize(250, 20)

		self.btn = QPushButton("Submit", self)
		self.btn.move(360, 85)
		self.btn.resize(50, 20)
		self.btn.setAutoDefault(True)

		# self.statusBar()

		self.setGeometry(90, 200, 220, 120)
		self.setWindowTitle('Firewall Check')

		self.setWindowModality(QtCore.Qt.ApplicationModal)

	def i_set(self, ):
		fname = QFileDialog.getOpenFileName(self, 'Open file', filter="Text files (*.txt)")
		self.iptxt.setText(fname[0])


class BatchExecuteWindow(QWidget):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.init_ui()

	def init_ui(self):

		self.btn = QPushButton("Execute", self)
		self.btn.resize(100, 30)
		self.btn.move(10, 10)
		self.btn.setAutoDefault(True)

		self.setGeometry(90, 200, 120, 50)
		self.setWindowTitle('Batch SFTP')


class TelnetWindow(QMainWindow):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.init_ui()

	def init_ui(self):
		self.nplabel = QLabel('Which Protocol would you like to enable?', self)
		self.nplabel.resize(200, 30)
		self.nplabel.move(60, 5)

		self.sshbtn = QPushButton("SSH", self)
		self.sshbtn.move(30, 35)
		self.sshbtn.resize(50, 20)
		self.sshbtn.setAutoDefault(True)

		self.ftpbtn = QPushButton("FTP", self)
		self.ftpbtn.move(90, 35)
		self.ftpbtn.resize(50, 20)
		self.ftpbtn.setAutoDefault(True)

		self.apibtn = QPushButton("API", self)
		self.apibtn.move(150, 35)
		self.apibtn.resize(50, 20)
		self.apibtn.setAutoDefault(True)

		self.winbtn = QPushButton("Winbox", self)
		self.winbtn.move(210, 35)
		self.winbtn.resize(50, 20)
		self.winbtn.setAutoDefault(True)

		self.statusBar()

		self.setGeometry(90, 200, 300, 80)
		self.setWindowTitle('Enable Protocol')

		self.setWindowModality(QtCore.Qt.ApplicationModal)

class SubnetRow(QWidget):

	def __init__(self, main):
		super(SubnetRow, self).__init__()
		self.Main = main
		self.setup()

	def setup(self):
		self.rowlayout = QHBoxLayout()

		self.l1 = QLabel("Base Ip:")
		self.l1.setFixedWidth(40)
		self.b1 = QLineEdit()
		self.b1.setFixedWidth(100)
		self.l2 = QLabel("Subnet Prefix:")
		self.l2.setFixedWidth(70)
		self.b2 = QLineEdit()
		self.b2.setFixedWidth(30)
		self.b2.setMaxLength(3)
		self.b3 = QPushButton("+")
		# self.b3.setFixedWidth(30)
		self.b3.clicked.connect(self.Main.add_widget)
		self.b3.setAutoDefault(True)

		self.rowlayout.addWidget(self.l1)
		self.rowlayout.addWidget(self.b1)
		self.rowlayout.addWidget(self.l2)
		self.rowlayout.addWidget(self.b2)
		self.rowlayout.addWidget(self.b3)

		self.setLayout(self.rowlayout)


class MikroWindow(QMainWindow):
	def __init__(self, parent=None):
		super(MikroWindow, self).__init__()
		self.GUI()

	def GUI(self):
		self.count = 0

		self.height = 80

		self.rowlist = []
		self.baselist = []
		self.subnetlist = []

		# main button
		self.main_label = QLabel('Subnets')
		self.main_label.setStyleSheet('font-size: 20px;')
		self.main_label.setAlignment(QtCore.Qt.AlignCenter)

		self.btn = QPushButton("Start")
		self.btn.setAutoDefault(True)

		# scroll area widget contents - layout
		self.scrollLayout = QFormLayout()

		# scroll area widget contents
		self.scrollWidget = QWidget()
		self.scrollWidget.setLayout(self.scrollLayout)

		# scroll area
		self.scrollArea = QScrollArea()
		self.scrollArea.setWidgetResizable(True)
		self.scrollArea.setWidget(self.scrollWidget)

		# main layout
		self.mainLayout = QVBoxLayout()

		# add all main to the main vLayout
		self.mainLayout.addWidget(self.main_label)
		self.mainLayout.addWidget(self.scrollArea)
		self.mainLayout.addWidget(self.btn)

		# central widget
		self.centralWidget = QWidget()
		self.centralWidget.setLayout(self.mainLayout)

		# set central widget
		self.setCentralWidget(self.centralWidget)

		self.setWindowTitle('MikroTik Poller')

		self.resize(400, self.height)
		self.move(500, 0)

		# self.add_widget()

	def add_widget(self):
		if self.height <= 400:
			self.height = self.height + 45
			self.resize(400, self.height)
		self.rowlist.append(SubnetRow(self))
		self.scrollLayout.addRow(self.rowlist[self.count])
		self.baselist.append(self.rowlist[self.count].b1)
		self.subnetlist.append(self.rowlist[self.count].b2)
		if self.count > 0:
			self.rowlist[self.count-1].b3 = QLabel("")

		self.count = self.count + 1
		# print(self.count)

	def reset(self):
		for i in reversed(range(self.scrollLayout.count())):
			self.scrollLayout.itemAt(i).widget().setParent(None)
		self.height = 80
		self.resize(400, self.height)
		self.add_widget()
		self.show()

class ProgressWindow(QWidget):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.init_ui()

	def init_ui(self):
		self.label = QLabel('Working...', self)
		self.label.resize(200, 30)
		self.label.move(60, 5)

		self.pbar = QProgressBar(self)
		self.pbar.move(40, 35)
		self.pbar.resize(200, 20)
		self.pbar.setMinimum(0)

		self.setGeometry(90, 200, 300, 80)
		self.setWindowTitle('Enable Protocol')
		# self.setWindowFlags(self.windowFlags() | QtCore.Qt.FramelessWindowHint)

		self.setWindowModality(QtCore.Qt.ApplicationModal)

	@QtCore.pyqtSlot(int)
	def update_progress(self, value):
		self.pbar.setValue(value)

	@QtCore.pyqtSlot(int)
	def set_max(self, value):
		self.pbar.setMaximum(value)


class SettingsWindow(QWidget):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.init_ui()

	def init_ui(self):
		self.h1 = QLabel('Defaults')
		self.h1.setStyleSheet('font-size: 20px;')
		self.h1.setAlignment(QtCore.Qt.AlignCenter)

		self.layout = QFormLayout()

		self.l1 = QLabel("Username")
		self.l2 = QLabel("Password")
		self.l3 = QLabel("New Password")
		self.l4 = QLabel("Firmware Location")
		self.l5 = QLabel("Batch IP List")

		self.b1 = QLineEdit()
		self.b2 = QLineEdit()
		self.b3 = QLineEdit()
		self.b4 = QHBoxLayout()
		self.b4_1 = QPushButton("Browse")
		self.b4_2 = QLineEdit()
		self.b4.addWidget(self.b4_1)
		self.b4.addWidget(self.b4_2)
		self.b5 = QHBoxLayout()
		self.b5_1 = QPushButton("Browse")
		self.b5_2 = QLineEdit()
		self.b5.addWidget(self.b5_1)
		self.b5.addWidget(self.b5_2)

		self.apply = QPushButton("Apply")
		self.apply.clicked.connect(self.apply_settings)
		self.b4_1.clicked.connect(self.f_set)
		self.b5_1.clicked.connect(self.i_set)
		self.apply.setAutoDefault(True)

		self.layout.addRow(self.h1)

		self.layout.addRow(self.l1, self.b1)
		self.layout.addRow(self.l2, self.b2)
		self.layout.addRow(self.l3, self.b3)
		self.layout.addRow(self.l4, self.b4)
		self.layout.addRow(self.l5, self.b5)
		self.layout.addRow(self.apply)

		self.setLayout(self.layout)
		self.setGeometry(90, 200, 300, 80)
		self.setWindowTitle('Settings')

		# self.show()

	def apply_settings(self):
		master.settings['defaultUsername'] = self.b1.text()
		master.settings['defaultPassword'] = self.b2.text()
		master.settings['defaultNewPassword'] = self.b3.text()
		master.settings['defaultFirmwareLocation'] = self.b4_2.text()
		master.settings['defaultIPListLocation'] = self.b5_2.text()
		with open('settings.yaml', 'w') as f:
			dump(master.settings, f)
		master.fill_settings()
		self.close()

	def f_set(self,):
		fname = QFileDialog.getOpenFileName(self, 'Open file')
		self.b4_2.setText(fname[0])

	def i_set(self,):
		fname = QFileDialog.getOpenFileName(self, 'Open file', filter="Text files (*.txt)")
		self.b5_2.setText(fname[0])


class StatusWindow(QWidget):
	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.title = 'PyQt5 table - pythonspot.com'
		self.left = 510
		self.top = 30
		self.width = 632
		self.height = 440
		self.init_ui()

	def init_ui(self):
		self.setWindowTitle(self.title)
		self.setGeometry(self.left, self.top, self.width, self.height)

		self.createtable()

		# Add box layout, add table to box layout and add box layout to widget
		self.layout = QVBoxLayout()
		self.layout.addWidget(self.tableWidget)
		self.setLayout(self.layout)

		# self.pbar = QProgressBar(self)
		# self.pbar.move(416, 100)
		# self.pbar.resize(91, 23)
		# self.pbar.setMinimum(0)
		# # self.pbar.setVisible(False)

		# Show widget
		# print("hecks yeah")
		# self.show()

	def createtable(self):
		# Create table
		self.tableWidget = QTableWidget()
		self.tableWidget.setRowCount(0)
		self.tableWidget.setColumnCount(6)
		self.tableWidget.verticalHeader().setVisible(False)

		self.headers = ["IP", "Name", "Firmware", "Architecture", "Online", "Status"]

		self.tableWidget.setHorizontalHeaderLabels(self.headers)

		self.tableWidget.move(0, 0)

		# table selection change
		self.tableWidget.doubleClicked.connect(self.on_click)

	@QtCore.pyqtSlot()
	def on_click(self):
		print("\n")
		for currentQTableWidgetItem in self.tableWidget.selectedItems():
			print(currentQTableWidgetItem.row(), currentQTableWidgetItem.column(), currentQTableWidgetItem.text())

	@QtCore.pyqtSlot(int, int, QWidget)
	def set_cell_widget(self, x, y, widget):
		self.tableWidget.setItem(x, y, widget)

	@QtCore.pyqtSlot(int, int, str)
	def set_cell(self, x, y, content):
		self.tableWidget.setItem(x, y, QTableWidgetItem(content))

	@QtCore.pyqtSlot()
	def add_row(self):
		self.tableWidget.insertRow(self.tableWidget.rowCount())

	@QtCore.pyqtSlot()
	def clear(self):
		self.tableWidget.clearContents()
		self.tableWidget.setRowCount(0)

	@QtCore.pyqtSlot(int, int, str)
	def set_cell_color(self, x, y, color):
		if color == 'red':
			self.tableWidget.item(x, y).setBackground(QtGui.QColor(124, 10, 2))
		elif color == 'green':
			self.tableWidget.item(x, y).setBackground(QtGui.QColor(76, 187, 23))
			self.tableWidget.item(x, y).setForeground(QtGui.QColor(0, 0, 0))


class ToolWidget(QWidget):

	def __init__(self, parent=None):
		super(self.__class__, self).__init__(parent)
		self.init_ui()

	def init_ui(self):

		self.toolbar = QToolBar()
		self.toolbar.addAction("Aww Yeah")
		self.toolbar.setOrientation(QtCore.Qt.Vertical)


class MainWindow(QMainWindow):
	def __init__(self):
		super().__init__()
		self.init_ui()

	def init_ui(self):

		self.mainMenu = self.menuBar()
		self.fileMenu = self.mainMenu.addMenu('File')
		self.editMenu = self.mainMenu.addMenu('Edit')
		self.viewMenu = self.mainMenu.addMenu('View')
		self.searchMenu = self.mainMenu.addMenu('Search')
		self.toolsMenu = self.mainMenu.addMenu('Tools')
		self.helpMenu = self.mainMenu.addMenu('Help')

		self.themeMenu = self.viewMenu.addMenu('Themes')
		self.darkAction = self.themeMenu.addAction('Dark')
		self.darkAction.triggered.connect(lambda: self.update_theme("DarkOrange.qss"))
		self.coffeeAction = self.themeMenu.addAction('Coffee')
		self.coffeeAction.triggered.connect(lambda: self.update_theme("Coffee.qss"))

		self.reportAction = self.helpMenu.addAction('Report an Issue')
		self.reportAction.triggered.connect(self.open_url)
		self.wikiAction = self.helpMenu.addAction('Wiki')
		self.wikiAction.triggered.connect(self.open_wiki)

		self.exitAction = self.fileMenu.addAction('Exit')
		self.exitAction.triggered.connect(sys.exit)

		self.settingsAction = self.toolsMenu.addAction('Settings')

		self.ipbox = QLineEdit(self)
		self.range = "(?:[0-1]?[0-9]?[0-9]|2[0-4][0-9]|25[0-5])"
		self.regex = QtCore.QRegExp("^" + self.range + "\\." + self.range + "\\." + self.range + "\\." + self.range + "$")
		self.ipbox.setValidator(QtGui.QRegExpValidator(self.regex))
		self.ipbox.move(80, 30)
		self.ipbox.resize(390, 20)

		self.iplabel = QLabel('Ip: ', self)
		self.iplabel.move(63, 23)
		self.iplabel.resize(15, 30)

		self.ubox = QLineEdit(self)
		self.ubox.move(80, 55)
		self.ubox.resize(390, 20)

		self.ulabel = QLabel('Username: ', self)
		self.ulabel.move(25, 48)
		self.ulabel.resize(50, 30)

		self.pbox = QLineEdit(self)
		self.pbox.setEchoMode(QLineEdit.Password)
		self.pbox.move(80, 80)
		self.pbox.resize(390, 20)

		self.plabel = QLabel('Password:', self)
		self.plabel.move(27, 78)
		self.plabel.resize(50, 20)

		self.pbar = QProgressBar(self)
		self.pbar.move(140, 107)
		self.pbar.resize(260, 20)
		self.pbar.setMinimum(0)
		self.pbar.setVisible(False)

		self.clearbtn = QPushButton("Clear", self)
		self.clearbtn.resize(50, 20)
		self.clearbtn.move(420, 107)
		self.clearbtn.setAutoDefault(True)

		# self.toolwidget = ToolWidget()
		# self.toolwidget.move(500, 500)
		# self.toolwidget.setVisible(True)

		self.btn1 = QPushButton("Firmware", self)
		self.btn1.move(20, 135)
		self.btn1.resize(100, 30)
		self.btn1.setAutoDefault(True)

		self.btn2 = QPushButton("Password", self)
		self.btn2.move(20, 170)
		self.btn1.resize(100, 30)
		self.btn2.setAutoDefault(True)

		self.btn3 = QPushButton("Firewall", self)
		self.btn3.move(20, 205)
		self.btn1.resize(100, 30)
		self.btn3.setAutoDefault(True)

		self.btn4 = QPushButton("Radio Name", self)
		self.btn4.move(20, 240)
		self.btn1.resize(100, 30)
		self.btn4.setAutoDefault(True)

		self.btn5 = QPushButton("Custom Command", self)
		self.btn5.move(20, 275)
		self.btn1.resize(100, 30)
		self.btn5.setAutoDefault(True)

		self.btn6 = QPushButton("Telnet", self)
		self.btn6.move(20, 310)
		self.btn1.resize(100, 30)
		self.btn6.setAutoDefault(True)

		self.btn7 = QPushButton("Batch SFTP", self)
		self.btn7.move(20, 345)
		self.btn1.resize(100, 30)
		self.btn7.setAutoDefault(True)

		self.btn8 = QPushButton("Mikro Checker", self)
		self.btn8.move(20, 380)
		self.btn1.resize(100, 30)
		self.btn8.setAutoDefault(True)

		self.textbox = QPlainTextEdit(self)
		self.textbox.setReadOnly(True)
		self.textbox.move(140, 135)
		self.textbox.resize(330, 275)

		self.statusBar()
		self.setGeometry(0, 0, 500, 440)
		self.setWindowTitle('Revware Mikrotik Control')

	@QtCore.pyqtSlot(int)
	def update_progress(self, value):
		self.pbar.setValue(value)

	@QtCore.pyqtSlot(int)
	def set_max(self, value):
		self.pbar.setMaximum(value)

	@QtCore.pyqtSlot(bool)
	def view_progress(self, x):
		self.pbar.setVisible(x)

	@QtCore.pyqtSlot()
	def clear_info(self):
		self.ipbox.setText('')
		self.ubox.setText('')
		self.pbox.setText('')

	@QtCore.pyqtSlot(str)
	def update_status(self, status):
		self.textbox.appendPlainText(status)
		print(status)

	def update_theme(self, name):
		with open(name, 'r') as myfile:
			theme = myfile.read()
		master.settings['defaultTheme'] = name
		with open('settings.yaml', 'w') as f:
			dump(master.settings, f)
		app.setStyleSheet(theme)

	def open_url(self):
		url = QtCore.QUrl('https://github.com/Revand/Revware/issues')
		if not QtGui.QDesktopServices.openUrl(url):
			QtGui.QMessageBox.warning(self, 'Open Url', 'Could not open url')

	def open_wiki(self):
		url = QtCore.QUrl('https://github.com/Revand/Revware/wiki')
		if not QtGui.QDesktopServices.openUrl(url):
			QtGui.QMessageBox.warning(self, 'Open Url', 'Could not open url')

if __name__ == '__main__':
	app = QApplication(sys.argv)
	master = Master()
	sys.exit(app.exec_())
