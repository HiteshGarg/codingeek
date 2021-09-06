# Add two numbers using + operator
num1 = int(input("Enter the First number: "))
num2 = int(input("Enter the Second number: "))

res = num1 + num2
print("The result after adding the given two numbers is: ", res)


#####################################################################

# Add two numbers using + operator
def add_numbers(num2, num1):
  return num1 + num2


num1 = int(input("Enter the First number: "))
num2 = int(input("Enter the Second number: "))
print("The result after adding the given two numbers is: ", add_numbers(num1, num2))

######################################################################

# Add two numbers using + operator
num1 = 3
num2 = 6
print(num1 + num2)

######################################################################

# Add two numbers using + operator with .format manner
num1 = input("Enter the First number: ")
num2 = input("Enter the Second number: ")
n1 = float(num1)
n2 = float(num2)
print("The sum of {0} and {1} is {2}".format(n1, n2, n1 + n2))


#######################################################################

# Add two numbers using Bitwise Operator

def add_two_numbers(n1, n2):
  if n2 == 0:
    return n1
  else:
    return add_two_numbers(n1 ^ n2, (n1 & n2) << 1)


n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))

print("The sum is:", add_two_numbers(n1, n2))