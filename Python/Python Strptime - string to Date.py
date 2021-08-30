import datetime
provided_datetime_string_1 = "05/07/2021 12:15:32"
f1 = datetime.datetime.strptime(provided_datetime_string_1, "%d/%m/%Y %H:%M:%S")
print("format1 =", f1)
f2 = datetime.datetime.strptime(provided_datetime_string_1, "%m/%d/%Y %H:%M:%S")
print("format2 =", f2)

#######################################################

import time
print(time.strptime('Fri Jul 05 13:01:02 2021'))

#######################################################

import datetime
string = '12::17::39'
f1 = datetime.datetime.strptime(string, '%H::%M::%S').time()
print(type(f1))
print(f1)

########################################################

import datetime
string = '12::two minutes::39'
f1 = datetime.datetime.strptime(string, '%H::%M::%S').time()
print(f1)       #Gives Error

########################################################

import datetime
import time
input_string_1 = '07/2021/05 12:45:49'
try:
  object1 = datetime.datetime.strptime(input_string_1, '%m/%d/%y')
except ValueError as exception:
  print('Error Raised: ', exception)
input_string_2 = '99::55::26'
try:
  object2 = time.strptime(input_string_2, '%H::%M::%S')
except ValueError as exception:
  print('Error Raised: ', exception)

########################################################

