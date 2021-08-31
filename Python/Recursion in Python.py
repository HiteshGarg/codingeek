# Binary search in Python by recursion
def binarysearch(arr, start, end, x):
  if end >= start:   # base condition
    mid = (start + end) // 2
    if arr[mid] == x:   # If value found at the mid
      return mid
    elif arr[mid] > x:   # If value is smaller than mid
      return binarysearch(arr, start, mid-1, x)
    else:
      return binarysearch(arr, mid+1, end, x)
  else:
    return 0   # Value not found
arr = [1, 3, 5, 9, 12, 17, 19]
x = 17
# Function call
result = binarysearch(arr, 0, len(arr)-1, x)
if result != 0:
  print("Value found at index", str(result))
else:
  print("Value not found in array")

###############################################################

# Factorial of any number
def factorial(x):
  if x == 1:
    return 1  # base condition to stop the iteration
  else:
    return (x * factorial(x-1))  # recursive call
x = int(input("Enter the number "))
print("Factorial is ", factorial(x))

###############################################################

# Fibonacci Series
def fibonacci_series(x):
  if x <= 1:  # base condition
    return x
  else:
    return(fibonacci_series(x-1) + fibonacci_series(x-2))
total_terms = 7
if total_terms <= 0:  # Fibonacci series term cannot be less than 1
  print("Input Invalid ! Give some positive input")
else:
  print("The series formed is:")
  for i in range(total_terms):
    print(fibonacci_series(i))

#################################################################

def recur():
  recur()  #no base condition
recur()

##################################################################

# non-tail recursive factorial function
def factorial(x):
  if (x == 0):  # base condition
    return 1
  return x * factorial(x-1)
print(factorial(5))

##################################################################

# A tail recursive factorial function
def factorial(x, y=1):
  if (x == 0):  # base condition
    return y
  return factorial(x - 1, x * y)
print(factorial(5))