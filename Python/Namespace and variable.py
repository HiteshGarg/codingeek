def output():
    print("Codingeek")
a = output
a()

identifier = 50  #global namespace
def local_func():
  print(identifier) # access from global namespace

def local_func():
  identifier = 25  #local namespace

def local_func():
  identifier = 25  #local namespace
  def inner_local_func():
    print(identifier) # access from enclosing namespace
   
identifier1 = 50  #global namespace
def local_func():
  identifier2 = 25  #local namespace
  def inner_local_func():
    identifier3 = 0  #nested local namespace
    
a = 50
def local_func():
  a = 25
  def inner_local_func():
    a = 0
    print("Inner function -> a = ",a)
  inner_local_func()
  print("Local function -> a = ",a)
local_func()
print('Global scope -> a =', a)

a = 50
def local_func():
  global a
  a = 25
  def inner_local_func():
    global a
    a = 0
    print("Inner function -> a = ",a)
  inner_local_func()
  print("Local function -> a = ",a)
local_func()
print('Global scope -> a =', a)
