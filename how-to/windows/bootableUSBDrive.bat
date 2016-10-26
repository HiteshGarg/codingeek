
@echo off
(echo diskpart /s “%appdata%\cmd.txt” )>”%appdata%\boot.bat”
(echo list disk
echo select disk 1
echo clean
echo create partition primary
echo format fs ntfs Label=”SummA” quick
echo active)>”%appdata%\cmd.txt”
call “%appdata%\boot.bat”
pause
del /F /Q /S “%appdata%\cmd.txt”
del /F /Q /S “%appdata%\boot.bat”
