import datetime

timenow = datetime.datetime.now()
print("Original time now, with no formatting is: ", timenow)

# 1
form1 = timenow.strftime("%a %m %y")
print('\noutput of format 1:', form1)

# 2
form2 = timenow.strftime("%A %-m %Y")
print('\noutput of format 2:', form2)

# 3
form3 = timenow.strftime("%-I %p %S")
print('\noutput of format 3:', form3)

# 4
form4 = timenow.strftime("%-j")
print('\noutput of format 4:', form4)

########################################################

import datetime
stamp_for_time = 1637319991
timenow = datetime.datetime.fromtimestamp(stamp_for_time)
format1 = timenow.strftime("%c")
print("Output 1:", format1)
format2 = timenow.strftime("%x")
print("Output 2:", format2)
format3 = timenow.strftime("%X")
print("Output 3:", format3)

#########################################################

import datetime

timestamp = 1628936199
timenow = datetime.datetime.fromtimestamp(timestamp)

# 1
form1 = timenow.strftime("%c")
print('\noutput of format 1:', form1)

# 2
form2 = timenow.strftime("%x")
print('\noutput of format 2:', form2)

# 3
form3 = timenow.strftime("%X")
print('\noutput of format 3:', form3)


