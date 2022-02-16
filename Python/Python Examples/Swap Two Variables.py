# Python Program to Swap two variables using third variable

# We can take user input
# num1 = int(input("Enter first number"))

num1 = 9
num2 = 1

print("Variable values before swap ")
print("Value of num1: ", num1, "\nValue of num2: ", num2)

temp = num1
num1 = num2
num2 = temp

print("\nVariable values after swap ")
print("Value of num1: ", num1, "\nValue of num2: ", num2)

#######################################################################

# Python Program to Swap two variables at same position { without using third variable}

# We can take user input
# num1 = int(input("Enter first number"))

num1 = 14
num2 = 51

print("Variable values before swap ")
print("Value of num1: ", num1, "\nValue of num2: ", num2)

num1, num2 = num2, num1

print("\nVariable values after swap ")
print("Value of num1: ", num1, "\nValue of num2: ", num2)

##########################################################################

# Python Program to Swap two variables using XOR operator { without using third variable}

num1 = 14
num2 = 51

print("Value of num1: ", num1, "\nValue of num2: ", num2)

num1 = num1 ^ num2
num2 = num1 ^ num2
num1 = num1 ^ num2

print("\nVariable values after swap ")
print("Value of num1: ", num1, "\nValue of num2: ", num2)

###########################################################################

# Python Program to Swap two variables using Arithmetic Operator { without using third variable}

num1 = 3450
num2 = 1267

print("Value of num1: ", num1, "\nValue of num2: ", num2)

num1 = num1 + num2
num2 = num1 - num2
num1 = num1 - num2

print("\nVariable values after swap ")
print("Value of num1: ", num1, "\nValue of num2: ", num2)