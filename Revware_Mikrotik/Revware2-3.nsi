; Script generated by the HM NIS Edit Script Wizard.

; HM NIS Edit Wizard helper defines
!define PRODUCT_NAME "Revware"
!define PRODUCT_VERSION "2.3"
!define PRODUCT_PUBLISHER "Pocketinet, Inc."
!define PRODUCT_WEB_SITE "https://github.com/Revand/Revware"
!define PRODUCT_DIR_REGKEY "Software\Microsoft\Windows\CurrentVersion\App Paths\gui.exe"
!define PRODUCT_UNINST_KEY "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PRODUCT_NAME}"
!define PRODUCT_UNINST_ROOT_KEY "HKLM"

SetCompressor lzma

; MUI 1.67 compatible ------
!include "MUI.nsh"

; MUI Settings
!define MUI_ABORTWARNING
!define MUI_ICON "${NSISDIR}\Contrib\Graphics\Icons\modern-install.ico"
!define MUI_UNICON "${NSISDIR}\Contrib\Graphics\Icons\modern-uninstall.ico"

; Welcome page
!insertmacro MUI_PAGE_WELCOME
; License page
;!insertmacro MUI_PAGE_LICENSE "license.txt"
; Directory page
!insertmacro MUI_PAGE_DIRECTORY
; Instfiles page
!insertmacro MUI_PAGE_INSTFILES
; Finish page
!define MUI_FINISHPAGE_RUN "$INSTDIR\dist\gui\gui.exe"
!insertmacro MUI_PAGE_FINISH

; Uninstaller pages
!insertmacro MUI_UNPAGE_INSTFILES

; Language files
!insertmacro MUI_LANGUAGE "English"

; Reserve files
!insertmacro MUI_RESERVEFILE_INSTALLOPTIONS

; MUI end ------

Name "${PRODUCT_NAME} ${PRODUCT_VERSION}"
OutFile "SetupRevware.exe"
InstallDir "$PROGRAMFILES\Revware"
InstallDirRegKey HKLM "${PRODUCT_DIR_REGKEY}" ""
ShowInstDetails show
ShowUnInstDetails show

Section "MainSection" SEC01
  SetOutPath "$INSTDIR\.idea\codeStyles"
  SetOverwrite try
  File "MikrotikManager\.idea\codeStyles\codeStyleConfig.xml"
  SetOutPath "$INSTDIR\.idea\dictionaries"
  File "MikrotikManager\.idea\dictionaries\brich.xml"
  SetOutPath "$INSTDIR\.idea\inspectionProfiles"
  File "MikrotikManager\.idea\inspectionProfiles\Project_Default.xml"
  SetOutPath "$INSTDIR\.idea"
  File "MikrotikManager\.idea\misc.xml"
  File "MikrotikManager\.idea\modules.xml"
  File "MikrotikManager\.idea\Revware_Mikrotik.iml"
  File "MikrotikManager\.idea\vcs.xml"
  File "MikrotikManager\.idea\workspace.xml"
  SetOutPath "$INSTDIR\.vs\Revware_Mikrotik\v15"
  File "MikrotikManager\.vs\Revware_Mikrotik\v15\.suo"
  SetOutPath "$INSTDIR"
  File "MikrotikManager\batch.log"
  SetOutPath "$INSTDIR\dist\gui"
  File "MikrotikManager\dist\gui\base_library.zip"
  File "MikrotikManager\dist\gui\bcrypt._bcrypt.pyd"
  File "MikrotikManager\dist\gui\Coffee.qss"
  SetOutPath "$INSTDIR\dist\gui\cryptography-2.3.1-py3.6.egg-info"
  File "MikrotikManager\dist\gui\cryptography-2.3.1-py3.6.egg-info\INSTALLER"
  File "MikrotikManager\dist\gui\cryptography-2.3.1-py3.6.egg-info\METADATA"
  File "MikrotikManager\dist\gui\cryptography-2.3.1-py3.6.egg-info\RECORD"
  File "MikrotikManager\dist\gui\cryptography-2.3.1-py3.6.egg-info\top_level.txt"
  File "MikrotikManager\dist\gui\cryptography-2.3.1-py3.6.egg-info\WHEEL"
  SetOutPath "$INSTDIR\dist\gui"
  File "MikrotikManager\dist\gui\cryptography.hazmat.bindings._constant_time.pyd"
  File "MikrotikManager\dist\gui\cryptography.hazmat.bindings._openssl.pyd"
  File "MikrotikManager\dist\gui\DarkOrange.qss"
  File "MikrotikManager\dist\gui\gui.exe"
  CreateDirectory "$SMPROGRAMS\Revware"
  CreateShortCut "$SMPROGRAMS\Revware\Revware.lnk" "$INSTDIR\dist\gui\gui.exe"
  CreateShortCut "$DESKTOP\Revware.lnk" "$INSTDIR\dist\gui\gui.exe"
  File "MikrotikManager\dist\gui\gui.exe.manifest"
  File "MikrotikManager\dist\gui\gui_original.exe"
  SetOutPath "$INSTDIR\dist\gui\Include"
  File "MikrotikManager\dist\gui\Include\pyconfig.h"
  SetOutPath "$INSTDIR\dist\gui"
  File "MikrotikManager\dist\gui\MSVCP140.dll"
  File "MikrotikManager\dist\gui\nacl._sodium.pyd"
  File "MikrotikManager\dist\gui\pyexpat.pyd"
  SetOutPath "$INSTDIR\dist\gui\PyQt5\Qt\bin"
  File "MikrotikManager\dist\gui\PyQt5\Qt\bin\qt.conf"
  SetOutPath "$INSTDIR\dist\gui\PyQt5\Qt\plugins\iconengines"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\iconengines\qsvgicon.dll"
  SetOutPath "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\imageformats\qgif.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\imageformats\qicns.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\imageformats\qico.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\imageformats\qjpeg.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\imageformats\qsvg.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\imageformats\qtga.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\imageformats\qtiff.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\imageformats\qwbmp.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\imageformats\qwebp.dll"
  SetOutPath "$INSTDIR\dist\gui\PyQt5\Qt\plugins\platforms"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\platforms\qminimal.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\platforms\qoffscreen.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\platforms\qwebgl.dll"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\platforms\qwindows.dll"
  SetOutPath "$INSTDIR\dist\gui\PyQt5\Qt\plugins\printsupport"
  File "MikrotikManager\dist\gui\PyQt5\Qt\plugins\printsupport\windowsprintersupport.dll"
  SetOutPath "$INSTDIR\dist\gui"
  File "MikrotikManager\dist\gui\PyQt5.Qt.pyd"
  File "MikrotikManager\dist\gui\PyQt5.QtCore.pyd"
  File "MikrotikManager\dist\gui\PyQt5.QtGui.pyd"
  File "MikrotikManager\dist\gui\PyQt5.QtPrintSupport.pyd"
  File "MikrotikManager\dist\gui\PyQt5.QtWidgets.pyd"
  File "MikrotikManager\dist\gui\PyQt5.sip.pyd"
  File "MikrotikManager\dist\gui\python3.dll"
  File "MikrotikManager\dist\gui\python36.dll"
  File "MikrotikManager\dist\gui\pywintypes36.dll"
  File "MikrotikManager\dist\gui\Qt5Core.dll"
  File "MikrotikManager\dist\gui\Qt5Gui.dll"
  File "MikrotikManager\dist\gui\Qt5Network.dll"
  File "MikrotikManager\dist\gui\Qt5PrintSupport.dll"
  File "MikrotikManager\dist\gui\Qt5Qml.dll"
  File "MikrotikManager\dist\gui\Qt5Quick.dll"
  File "MikrotikManager\dist\gui\Qt5Svg.dll"
  File "MikrotikManager\dist\gui\Qt5WebSockets.dll"
  File "MikrotikManager\dist\gui\Qt5Widgets.dll"
  File "MikrotikManager\dist\gui\select.pyd"
  File "MikrotikManager\dist\gui\settings.yaml"
  File "MikrotikManager\dist\gui\sip.pyd"
  File "MikrotikManager\dist\gui\unicodedata.pyd"
  File "MikrotikManager\dist\gui\VCRUNTIME140.dll"
  File "MikrotikManager\dist\gui\win32security.pyd"
  File "MikrotikManager\dist\gui\_bz2.pyd"
  File "MikrotikManager\dist\gui\_cffi_backend.pyd"
  File "MikrotikManager\dist\gui\_ctypes.pyd"
  File "MikrotikManager\dist\gui\_decimal.pyd"
  File "MikrotikManager\dist\gui\_hashlib.pyd"
  File "MikrotikManager\dist\gui\_lzma.pyd"
  File "MikrotikManager\dist\gui\_socket.pyd"
  File "MikrotikManager\dist\gui\_ssl.pyd"
  File "MikrotikManager\dist\gui\_win32sysloader.pyd"
  File "MikrotikManager\dist\gui\_yaml.pyd"
  SetOutPath "$INSTDIR"
  File "MikrotikManager\gui.pyw"
  File "MikrotikManager\gui.spec"
  File "MikrotikManager\ipList.txt"
  File "MikrotikManager\lfile"
  File "MikrotikManager\Logo.ico"
  File "MikrotikManager\Logo.PNG"
  File "MikrotikManager\menu.pyw"
  File "MikrotikManager\ping.pyw"
  File "MikrotikManager\python35.dll"
  File "MikrotikManager\Revware_Mikrotik.pyproj"
  File "MikrotikManager\sftp.pyw"
  File "MikrotikManager\ssh.pyw"
  File "MikrotikManager\telnet.pyw"
  SetOutPath "$INSTDIR\__pycache__"
  File "MikrotikManager\__pycache__\ftp.cpython-36.pyc"
  File "MikrotikManager\__pycache__\gui.cpython-36.pyc"
  File "MikrotikManager\__pycache__\menu.cpython-35.pyc"
  File "MikrotikManager\__pycache__\menu.cpython-36.pyc"
  File "MikrotikManager\__pycache__\menu.cpython-37.pyc"
  File "MikrotikManager\__pycache__\ping.cpython-35.pyc"
  File "MikrotikManager\__pycache__\ping.cpython-36.pyc"
  File "MikrotikManager\__pycache__\ping.cpython-37.pyc"
  File "MikrotikManager\__pycache__\sftp.cpython-35.pyc"
  File "MikrotikManager\__pycache__\sftp.cpython-36.pyc"
  File "MikrotikManager\__pycache__\sftp.cpython-37.pyc"
  File "MikrotikManager\__pycache__\ssh.cpython-35.pyc"
  File "MikrotikManager\__pycache__\ssh.cpython-36.pyc"
  File "MikrotikManager\__pycache__\ssh.cpython-37.pyc"
  File "MikrotikManager\__pycache__\telnet.cpython-35.pyc"
  File "MikrotikManager\__pycache__\telnet.cpython-36.pyc"
  File "MikrotikManager\__pycache__\telnet.cpython-37.pyc"
SectionEnd

Section -AdditionalIcons
  SetOutPath $INSTDIR
  WriteIniStr "$INSTDIR\${PRODUCT_NAME}.url" "InternetShortcut" "URL" "${PRODUCT_WEB_SITE}"
  CreateShortCut "$SMPROGRAMS\Revware\Website.lnk" "$INSTDIR\${PRODUCT_NAME}.url"
  CreateShortCut "$SMPROGRAMS\Revware\Uninstall.lnk" "$INSTDIR\uninst.exe"
SectionEnd

Section -Post
  WriteUninstaller "$INSTDIR\uninst.exe"
  WriteRegStr HKLM "${PRODUCT_DIR_REGKEY}" "" "$INSTDIR\dist\gui\gui.exe"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "DisplayName" "$(^Name)"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "UninstallString" "$INSTDIR\uninst.exe"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "DisplayIcon" "$INSTDIR\dist\gui\gui.exe"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "DisplayVersion" "${PRODUCT_VERSION}"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "URLInfoAbout" "${PRODUCT_WEB_SITE}"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "Publisher" "${PRODUCT_PUBLISHER}"
SectionEnd


Function un.onUninstSuccess
  HideWindow
  MessageBox MB_ICONINFORMATION|MB_OK "$(^Name) was successfully removed from your computer."
FunctionEnd

Function un.onInit
  MessageBox MB_ICONQUESTION|MB_YESNO|MB_DEFBUTTON2 "Are you sure you want to completely remove $(^Name) and all of its components?" IDYES +2
  Abort
FunctionEnd

Section Uninstall
  Delete "$INSTDIR\${PRODUCT_NAME}.url"
  Delete "$INSTDIR\uninst.exe"
  Delete "$INSTDIR\__pycache__\telnet.cpython-37.pyc"
  Delete "$INSTDIR\__pycache__\telnet.cpython-36.pyc"
  Delete "$INSTDIR\__pycache__\telnet.cpython-35.pyc"
  Delete "$INSTDIR\__pycache__\ssh.cpython-37.pyc"
  Delete "$INSTDIR\__pycache__\ssh.cpython-36.pyc"
  Delete "$INSTDIR\__pycache__\ssh.cpython-35.pyc"
  Delete "$INSTDIR\__pycache__\sftp.cpython-37.pyc"
  Delete "$INSTDIR\__pycache__\sftp.cpython-36.pyc"
  Delete "$INSTDIR\__pycache__\sftp.cpython-35.pyc"
  Delete "$INSTDIR\__pycache__\ping.cpython-37.pyc"
  Delete "$INSTDIR\__pycache__\ping.cpython-36.pyc"
  Delete "$INSTDIR\__pycache__\ping.cpython-35.pyc"
  Delete "$INSTDIR\__pycache__\menu.cpython-37.pyc"
  Delete "$INSTDIR\__pycache__\menu.cpython-36.pyc"
  Delete "$INSTDIR\__pycache__\menu.cpython-35.pyc"
  Delete "$INSTDIR\__pycache__\gui.cpython-36.pyc"
  Delete "$INSTDIR\__pycache__\ftp.cpython-36.pyc"
  Delete "$INSTDIR\telnet.pyw"
  Delete "$INSTDIR\ssh.pyw"
  Delete "$INSTDIR\sftp.pyw"
  Delete "$INSTDIR\Revware_Mikrotik.pyproj"
  Delete "$INSTDIR\python35.dll"
  Delete "$INSTDIR\ping.pyw"
  Delete "$INSTDIR\menu.pyw"
  Delete "$INSTDIR\Logo.PNG"
  Delete "$INSTDIR\Logo.ico"
  Delete "$INSTDIR\lfile"
  Delete "$INSTDIR\ipList.txt"
  Delete "$INSTDIR\gui.spec"
  Delete "$INSTDIR\gui.pyw"
  Delete "$INSTDIR\dist\gui\_yaml.pyd"
  Delete "$INSTDIR\dist\gui\_win32sysloader.pyd"
  Delete "$INSTDIR\dist\gui\_ssl.pyd"
  Delete "$INSTDIR\dist\gui\_socket.pyd"
  Delete "$INSTDIR\dist\gui\_lzma.pyd"
  Delete "$INSTDIR\dist\gui\_hashlib.pyd"
  Delete "$INSTDIR\dist\gui\_decimal.pyd"
  Delete "$INSTDIR\dist\gui\_ctypes.pyd"
  Delete "$INSTDIR\dist\gui\_cffi_backend.pyd"
  Delete "$INSTDIR\dist\gui\_bz2.pyd"
  Delete "$INSTDIR\dist\gui\win32security.pyd"
  Delete "$INSTDIR\dist\gui\VCRUNTIME140.dll"
  Delete "$INSTDIR\dist\gui\unicodedata.pyd"
  Delete "$INSTDIR\dist\gui\sip.pyd"
  Delete "$INSTDIR\dist\gui\settings.yaml"
  Delete "$INSTDIR\dist\gui\select.pyd"
  Delete "$INSTDIR\dist\gui\Qt5Widgets.dll"
  Delete "$INSTDIR\dist\gui\Qt5WebSockets.dll"
  Delete "$INSTDIR\dist\gui\Qt5Svg.dll"
  Delete "$INSTDIR\dist\gui\Qt5Quick.dll"
  Delete "$INSTDIR\dist\gui\Qt5Qml.dll"
  Delete "$INSTDIR\dist\gui\Qt5PrintSupport.dll"
  Delete "$INSTDIR\dist\gui\Qt5Network.dll"
  Delete "$INSTDIR\dist\gui\Qt5Gui.dll"
  Delete "$INSTDIR\dist\gui\Qt5Core.dll"
  Delete "$INSTDIR\dist\gui\pywintypes36.dll"
  Delete "$INSTDIR\dist\gui\python36.dll"
  Delete "$INSTDIR\dist\gui\python3.dll"
  Delete "$INSTDIR\dist\gui\PyQt5.sip.pyd"
  Delete "$INSTDIR\dist\gui\PyQt5.QtWidgets.pyd"
  Delete "$INSTDIR\dist\gui\PyQt5.QtPrintSupport.pyd"
  Delete "$INSTDIR\dist\gui\PyQt5.QtGui.pyd"
  Delete "$INSTDIR\dist\gui\PyQt5.QtCore.pyd"
  Delete "$INSTDIR\dist\gui\PyQt5.Qt.pyd"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\printsupport\windowsprintersupport.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\platforms\qwindows.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\platforms\qwebgl.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\platforms\qoffscreen.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\platforms\qminimal.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats\qwebp.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats\qwbmp.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats\qtiff.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats\qtga.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats\qsvg.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats\qjpeg.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats\qico.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats\qicns.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats\qgif.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\plugins\iconengines\qsvgicon.dll"
  Delete "$INSTDIR\dist\gui\PyQt5\Qt\bin\qt.conf"
  Delete "$INSTDIR\dist\gui\pyexpat.pyd"
  Delete "$INSTDIR\dist\gui\nacl._sodium.pyd"
  Delete "$INSTDIR\dist\gui\MSVCP140.dll"
  Delete "$INSTDIR\dist\gui\Include\pyconfig.h"
  Delete "$INSTDIR\dist\gui\gui_original.exe"
  Delete "$INSTDIR\dist\gui\gui.exe.manifest"
  Delete "$INSTDIR\dist\gui\gui.exe"
  Delete "$INSTDIR\dist\gui\DarkOrange.qss"
  Delete "$INSTDIR\dist\gui\cryptography.hazmat.bindings._openssl.pyd"
  Delete "$INSTDIR\dist\gui\cryptography.hazmat.bindings._constant_time.pyd"
  Delete "$INSTDIR\dist\gui\cryptography-2.3.1-py3.6.egg-info\WHEEL"
  Delete "$INSTDIR\dist\gui\cryptography-2.3.1-py3.6.egg-info\top_level.txt"
  Delete "$INSTDIR\dist\gui\cryptography-2.3.1-py3.6.egg-info\RECORD"
  Delete "$INSTDIR\dist\gui\cryptography-2.3.1-py3.6.egg-info\METADATA"
  Delete "$INSTDIR\dist\gui\cryptography-2.3.1-py3.6.egg-info\INSTALLER"
  Delete "$INSTDIR\dist\gui\Coffee.qss"
  Delete "$INSTDIR\dist\gui\bcrypt._bcrypt.pyd"
  Delete "$INSTDIR\dist\gui\base_library.zip"
  Delete "$INSTDIR\batch.log"
  Delete "$INSTDIR\.vs\Revware_Mikrotik\v15\.suo"
  Delete "$INSTDIR\.idea\workspace.xml"
  Delete "$INSTDIR\.idea\vcs.xml"
  Delete "$INSTDIR\.idea\Revware_Mikrotik.iml"
  Delete "$INSTDIR\.idea\modules.xml"
  Delete "$INSTDIR\.idea\misc.xml"
  Delete "$INSTDIR\.idea\inspectionProfiles\Project_Default.xml"
  Delete "$INSTDIR\.idea\dictionaries\brich.xml"
  Delete "$INSTDIR\.idea\codeStyles\codeStyleConfig.xml"

  Delete "$SMPROGRAMS\Revware\Uninstall.lnk"
  Delete "$SMPROGRAMS\Revware\Website.lnk"
  Delete "$DESKTOP\Revware.lnk"
  Delete "$SMPROGRAMS\Revware\Revware.lnk"

  RMDir "$SMPROGRAMS\Revware"
  RMDir "$INSTDIR\dist\gui\PyQt5\Qt\plugins\printsupport"
  RMDir "$INSTDIR\dist\gui\PyQt5\Qt\plugins\platforms"
  RMDir "$INSTDIR\dist\gui\PyQt5\Qt\plugins\imageformats"
  RMDir "$INSTDIR\dist\gui\PyQt5\Qt\plugins\iconengines"
  RMDir "$INSTDIR\dist\gui\PyQt5\Qt\bin"
  RMDir "$INSTDIR\dist\gui\Include"
  RMDir "$INSTDIR\dist\gui\cryptography-2.3.1-py3.6.egg-info"
  RMDir "$INSTDIR\dist\gui"
  RMDir "$INSTDIR\__pycache__"
  RMDir "$INSTDIR\.vs\Revware_Mikrotik\v15"
  RMDir "$INSTDIR\.idea\inspectionProfiles"
  RMDir "$INSTDIR\.idea\dictionaries"
  RMDir "$INSTDIR\.idea\codeStyles"
  RMDir "$INSTDIR\.idea"
  RMDir "$INSTDIR"

  DeleteRegKey ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}"
  DeleteRegKey HKLM "${PRODUCT_DIR_REGKEY}"
  SetAutoClose true
SectionEnd