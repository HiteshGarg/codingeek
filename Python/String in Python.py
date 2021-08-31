#An example of string
str = "This is single line string"
print(str)
str = """This is 
      multiple line string"""
print(str)

########################################################

#An example of string
str="This is 'single' line string"
print(str)
s='This is "single" line string'
print(s)

#########################################################

x = "hel"
print(id(x))
x = "hel" + "lo"
# This id will refer to new object
# and hence it proves immutability
print(id(x))
str = "This is single line string"
print(str)
str[7] ='x'
print(str)

#########################################################

str = "Hello Codingeek"

print("Sliced string is: ",str[2])
print("Sliced string is: ",str[4:12])
print("Sliced string is: ",str[6:])
print("Sliced string is: ",str[:5])
print("Sliced string is: ",str[-2:])
print("Sliced string is: ",str[:-2])

#########################################################

for i in 'coding':
  print(i)

##########################################################

a = "codingeek"
b = len(a)
print(b)

##########################################################

str= "Nature is the best gift to us"
print("gift" in str)

##########################################################

str= "Nature is the best gift to us"
if "best" in str:
  print("Yes, 'best' is present")

##########################################################

str = "I am learning Python"
print("Current String: ")
print(str)
str[6] = 'p'  # Updating one character
print("\nNew string: ")
print(str)

###########################################################

str="Today is Friday"
print(str)
str="Today is Saturday"
print(str)
str="Today is Sunday"
print(str)

###########################################################

str = "I am learning Python"
print("Current String: ")
print(str)
del str[9]    #Deleting a character
print("\nAfter deletion: ")
print(str)

###########################################################

str = "I am learning Python"
print(str)
del str
print(str)

###########################################################

str_1 = 'Codin'
str_2 = 'geek'
print(repr(str_1 and str_2))   #It will return str_2
print(repr(str_2 and str_1))   #It will return str_1
print(repr(str_1 or str_2))    #It will return str_1
print(repr(str_2 or str_1))    #It will return str_2
print(repr(not str_1))         #It will return false
print(repr(not str_2))         #It will return false

############################################################

str = '''I'm a "Codingeekian"'''
print("Using triple quote: ")
print(str)

str = 'I\'m a "Geek"'
print("\nUsing Escape Sequence Single Quote: ")
print(str)

str = "I'm a \"Geek\""
print("\nUsing Escape Sequence Double Quotes: ")
print(str)

str = "D:\\Python\\Lib\\"  # printing path with escape sequence
print("\nUsing Escape Backslashes: ")
print(str)

#############################################################

str = R"This is \a56\y65\t76\s6b\n73 in \x84\x69\x12"
print("This is a raw string: ")
print(str)

##############################################################

# An simple example for Positional Formatting
str = "{3} {1} {2} {0}".format('Platform', 'Geek', 'Learing', 'Coding')
print("String according to position format: ")
print(str)

# Keyword Formatting
str = "{c} {g} {l} {p}".format(g='GEEK', c='CODING', p='PLATFORM', l='LEARNING')
print("\nString according to keyword format: ")
print(str)

###############################################################

# Integer value formatting
str = "{0:b}".format(19)
print("\nBinary value of 19 is ")
print(str)

# Float value formatting
str = "{0:e}".format(247.1794)
print("\nExponent value of 247.1794 is ")
print(str)

# Round off value formatting
str = "{0:.2f}".format(2 / 9)
print("\ntwo-ninth is ")
print(str)

#################################################################

# Old Style Formatting
num = 16.4531795
print("Formatting in old format(3.2f): ")
print('%3.2f' %num)