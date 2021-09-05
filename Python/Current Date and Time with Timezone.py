import datetime
now = datetime.datetime.now()
print ("Your local current date and time is : ", now)

####################################################

import datetime
time_now = datetime.datetime.now()
print ("Displaying the characteristic of now() : ")
print ("Prsesent Year : ",time_now.year)
print ("Prsesent Month : ",time_now.month)
print ("Prsesent Day : ",time_now.day)
print ("Prsesent Hour : ",time_now.hour)
print ("Prsesent Minute : ",time_now.minute)
print ("Prsesent Second : ",time_now.second)
print ("Prsesent Microsecond : ",time_now.microsecond)

####################################################

import datetime
import pytz
time_now_zone = datetime.datetime.now(pytz.timezone("Asia/Kolkata"))
print("Current Time in the country 'India' is : ", time_now_zone)
print("Set Timezone : ", time_now_zone.tzinfo)

###################################################

from datetime import datetime
# datetime(year, month, day[, hour[, minute[, second[, microsecond[,tzinfo]]]]])
current = datetime(2021, 1, 10, 23, 30)
# date/month/year format
format1 = current.strftime("%d/%m/%Y")
print("format1 =", format1)
# Nomal text format
format2 = current.strftime("%B %d, %Y")
print("format2 =", format2)
# month/date/year format
format3 = current.strftime("%m/%d/%y")
print("format3 =", format3)
# Month, day & year
format4 = current.strftime("%b-%d-%Y")
print("format4 =", format4)
#date and time
format5 = current.strftime("%Y-%m-%d %H:%M:%S")
print("format5 =", format5)

##################################################

