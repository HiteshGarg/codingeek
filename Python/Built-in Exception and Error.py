list_data = [2,4,6,8]
x = list_data[5]

#################################

import some_xyz_module
list_data=[2,4,6,8]
x=list_data[3]

#################################

dict_data={'2':"two", '4':"four", '6':"six"}
dict_data['8']

###################################

list_data=iter([3,5,7,9,11])
print(next(list_data))
print(next(list_data))
print(next(list_data))
print(next(list_data))
print(next(list_data))
print(next(list_data))

###################################

name=input('Give me a string') #suppose user entered ctrl+c

###################################

def test(x):
  if x / 0 == 1:
    print("Success")


test(2)

####################################

import sys
assert ('linux' in sys.platform), "This program needs a Linux system."