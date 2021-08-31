# An example for input
str = input("Enter your input\n\t: ")
print("Received input is : ", str)

############################################

file_1 = open('xyz.txt', 'r')           #You may need to create a xyz text file
for i in file_1:    #reading line one by one
  print (i)

#############################################

file_1 = open('xyz.txt', 'r')
file_1.close()

#############################################

file_1 = open('xyz.txt', 'r')
try:
   file_1 = open("test.txt", encoding = 'utf-8')
   # perform file operations
finally:
   file_1.close()

############################################

file_1 = open('xyz.txt', 'r')
print (file_1.read(11)) #reading the 11 characters
print (file_1.read(6)) #read next 6 characters - ends with a space
print (file_1.read()) #read rest of the file
print (file_1.read()) # gives empty string

##############################################

file_1 = open('xyz.txt', 'r')
print(file_1.tell())
print(file_1.seek(4))
print(file_1.tell())

#############################################

file_1 = open('xyz.txt','r')
print(file_1.readline())
print(file_1.readline())
print(file_1.readline())

#############################################

with open('xyz.txt', 'w', encoding = 'utf-8') as f:
  f.write("Codingeek.com\n")
  f.write("Home for Coders")
f = open('xyz.txt','r')  #checking
print(f.read())

#############################################

with open('xyz.txt', 'a') as f:
    f.write("\nKnowledge is power")

f = open('xyz.txt', 'r')  # checking
print(f.read())

#############################################

# Python code to illustrate split() function
with open("xyz.txt", "r") as f:
  lines = f.readlines()
  for eachline in lines:
      char = eachline.split()
      print (char)