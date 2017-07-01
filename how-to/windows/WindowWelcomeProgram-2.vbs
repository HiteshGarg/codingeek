Dim sapi,objShell,URL,URL1,URL2 
URL = "www.google.com" 
URL1 = "https://www.facebook.com/" 
URL2 = "https://web.whatsapp.com/" 
Set objShell = Wscript.CreateObject("WScript.Shell") 
Set sapi=CreateObject("sapi.spvoice") 
sapi.Speak ("Its good to see you again sir.") 
WScript.Sleep 400 
sapi.Speak ("Coding geek system initiated") 
sapi.Speak ("connecting to world wide web, global IP obtained") 
sapi.Speak (" System is fully operational") 
sapi.Speak ("initiating basic programs") 
objShell.Run "explorer.exe" 
objShell.Run(URL1) 
objShell.Run(URL2) 
objShell.Run(URL) 
sapi.Speak ("Have a nice day sir") 
Set objShell = Nothing
