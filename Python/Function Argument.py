def engine(process, state):
    print( process + ', ' + state)
engine("Computation", "Machine up and running")

#################################################################

def engine(process, state):
    print(process + ', ' + state)
engine("Computation")

#################################################################

def coder(task, output):
    print(task, output)
coder("Coding", "No error(Successful)")

#################################################################

def tasks(*tsk):
    for i in tsk:
        print(i)
tasks("Learning", "Eating", "Sleeping", "Running")

#################################################################

def tasks(a, b, *c):
  print(type(a), a)
  print(type(b), b)
  print(type(c), c)
tasks("Learning", 1, 2, "Running")

################################################################

def tasks(a, *c, b):
  """
  this will throw error
  """
tasks("Learning", 1, 2, "Running")

#################################################################

def engine(process, state="Undefined"):
  print(process + ', ' + state)
engine("Computation")
engine("Computed", "Engine off")

################################################################

def engine(state="Undefined", process):
  print(process + ', ' + state)
engine("Computation")

#################################################################

def engine(process, state="Undefined"):
  print(process + ', ' + state)
engine(process="Computation")
engine(state="Engine off", process="Computed")

#################################################################

def val(x):
  x = 20
  print("Value of x => ", x)
n = 5
val(n)
print("Value of n => ", n)

##################################################################

def f(value):
  value[1] = '###'
list1 = ['abc', 'def', 'ghi', 'jkl']
f(list1)
print(list1)