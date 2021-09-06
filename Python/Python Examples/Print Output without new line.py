# Python program to print output without new line

print("codingeek", end=" ")
print("- Home for Coders")

############################################################

# Python program to print output without new line
str_list = ["Powerful", "people", "comes", "from", "powerful", "places"]

# printing all element in same line
for word in range(len(str_list)):
  print(str_list[word], end=" ")

############################################################

#Python program to print all elements of list in single line
str_list = ["This", "list", "contains", "example", "which", "is", "to be", "printed"]
print(*str_list)

##############################################################

import sys

sys.stdout.write("This line is first line. ")
sys.stdout.write("This is on the same line")
