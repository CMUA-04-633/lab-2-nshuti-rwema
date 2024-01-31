ECHO windows_serial
ECHO Launching SerialFor Windows
START /min C:\"Program Files (x86)"\BEL\Realterm\realterm.exe CONTROLS=0 MONITOR=1 LFNL=1 baud=115200 echo=server:telnet
powershell -c "wsl telnet 127.0.0.1"