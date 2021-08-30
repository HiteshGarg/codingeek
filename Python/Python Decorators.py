def readout(message):
    return message.lower()


read_me = readout
print(readout('CODINGEEK!'))
print(read_me('CODINGEEK!'))

###############################################################

# function passed as argument to another function
def readme_soft(message):
    return message.lower()


def readme_loud(message):
    return message.upper()


def positive_message(inp_func):
    # function is stored in variable
    print("Decorating the function..")
    pm = inp_func("Good news, you are learning python advance.")
    print(pm)


positive_message(readme_loud)
positive_message(readme_soft)

################################################################

# Functions can return another function
def subtract(val1):
  def sub(val2):
    return val1-val2
  return sub
sub_val = subtract(174)
print(sub_val(121))

################################################################

def new_decorator(inp_function):      # decorator definition
  '''Here inside_decorator is a Wrapper function
     where the argument will be passed'''
  '''local functions can be accessed by inner function 
       here example "inp_function'''
  def inside_decorator():
    print("I am inside the decorator")
    # calling actual function inside the wrapper function.
    inp_function()
    print("I have successfully made my execution")
  return inside_decorator
# function, for being called inside wrapper
def calling_function():
  print("This is the main content!")
# passing 'calling_function' inside decorator for controlling its behavior
calling_function = new_decorator(calling_function)
# function call
calling_function()

#################################################################

import time
def getme_time(inp_function):
  """decorator to calculate time duration for execution of function."""
  def inside_decorator(*args, **kwargs):
    """
    added arguments inside the inner1,
    if function takes any arguments,
    can be added like this.
    """
    start_time = time.time()
    inp_function(*args, **kwargs)
    stop_time = time.time()
    print("Time taken for execution : ",
          inp_function.__name__, stop_time - start_time)
  return inside_decorator
@getme_time
def multiply(value1, value2):
  time.sleep(1)
  value = value1 * value2
  print(value)
# function call
multiply(12, 5)

#######################################################################

def first_decorator(func_name):
  def inside_function():
    print("First Decorator")
    func_name()
  return inside_function
def second_decorator(func_name):
  def inside_function():
    print("Second Decorator")
    func_name()
  return inside_function
@first_decorator
@second_decorator
def passvalue():
  print("Decorated function")


passvalue()


