Dim msg, sapi
msg=InputBox("Enter your text","Talk it")
Set sapi=CreateObject("sapi.spvoice")
sapi.Speak msg
