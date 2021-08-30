from datetime import datetime
import pytz

set_timezone1 = pytz.timezone('Asia/Kolkata')
set_timezone2 = pytz.timezone('America/New_York')
set_timezone3 = pytz.timezone('Europe/London')
time1 = datetime.now(set_timezone1).time()
time2 = datetime.now(set_timezone2).time()
time3 = datetime.now(set_timezone3).time()
print("Current Time in Kolkata:", time1)
print("Current Time in New York:", time2)
print("Current Time in London:", time3)

################################################

from datetime import datetime as dt

currenttime_now = dt.now()

time_now = currenttime_now.strftime("%H:%M:%S")
print("Current Time is:", time_now)

################################################

from datetime import datetime as dt
currenttime_now = dt.now()
print("Current time:", currenttime_now.time())
print("Current time class info:", currenttime_now.time().__class__)

#################################################

import time
current_time = time.localtime()
print(current_time)
print("hour :", current_time.tm_hour)
print("min :", current_time.tm_min)
print("sec :", current_time.tm_sec)
print("wday :", current_time.tm_wday)
print("zone :", current_time.tm_zone)
print("--------------------------------------")
current_time_str = time.strftime("%H:%M:%S", current_time)
print(current_time_str)

##################################################

