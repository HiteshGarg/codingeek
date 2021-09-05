def True():
  print("Hello")
True()                   #Syntax Error

#############################

def max():
  print("Hello")
max()

#############################

# Defined Function
def choice(count):
  print("List before amending: ", count)
  count[0] = 10
  print("List after amending: ", count)
  return
# Driver code
count = [1, 20, 40]
choice(count)
print("List after function was called: ", count)

##############################

def call(value):
  """
  The function prints the value
  which will be passed
  """
  print(value)
call(4)
print(call.__doc__)

###############################

def testing_return(num):
  """This function retuns true for an even number
  otherwise false"""
  if num < 0:
    return
  elif num % 2 != 0:
    return False
  else:
    return True
print(testing_return(-1))
print(testing_return(1))
print(testing_return(2))

##############################

def multiply(x,y):
  mul = x * y
  return mul
n1 = 3
n2 = 9
print("Multiplication result: ", multiply(n1,n2))

##############################

def multiply(x, y=10):
  mul = x * y
  return mul
n1 = 3
n2 = 9
print("Required Arguments: ", multiply(n1, n2))
print("Default Arguments: ", multiply(n1))
print("Keyword Arguments: ", multiply(x=n1, y=n2))
print("Keyword Arguments with different order: ", multiply(y=n2, x=n1))
def multiply_variable_args(*x):
  mul = 1
  for y in x:
    mul *= y
  return mul
print("Variable length arguments: ", multiply_variable_args(n1, n2))

###############################

def recur(x):
  if(x > 0):
    y = x + recur(x - 1)
    print(y)
  else:
    y = 0
  return y
print("Value after recursion completes ", recur(10))

#################################

mul = lambda n1, n2: n1 * n2      #function is defined
print ("Multiply 2 * 2 : ", mul( 2, 2 ))
print ("Multiply 4 * 4 : ", mul( 4, 4 ))

#################################

def name_list():
  names = ['James', 'Jonas', 'Jodua', 'John']
print(names)             #Error