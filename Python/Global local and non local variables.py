count = 5
def check():
  print('Inside funtion', count)
check()
print('Outside funtion', count)

#######################################################

colour = ['Green', 'White', 'Orange', 'Blue']
def try_update():
  # local variable created
  colour = ['Green', 'White', 'Orange']
  print('Inside funtion', colour)
try_update()
# global variable unaffected
print('Outside funtion', colour)

#######################################################

colour = ['Green', 'White', 'Orange', 'Blue']
def try_update():
  global colour
  colour = ['Green', 'White', 'Orange']
  print('Inside funtion', colour)
try_update()
# global variable updated
print('Outside funtion', colour)

######################################################

colour = ['Green', 'White', 'Orange', 'Blue']


def start_item():
    global colour
    colour = colour[0]


def iterate_all():
    global colour
    for i in colour:
        print(i)


iterate_all()
print(colour)
start_item()
print(colour)

#######################################################

colour = ['Green', 'White', 'Orange', 'Blue']


def start_item():
    global colour
    colour = colour[0]


def iterate_all():
    global colour
    for i in colour:
        print(i)


start_item()
print(colour)
iterate_all()
print(colour)

#####################################################

def name_list():
    names = ['James', 'Jonas', 'Jodua', 'John']
    print(names)


name_list()

#####################################################

def name_list():
  names = ['James', 'Jonas', 'Jodua', 'John']
print(names)

######################################################

str = "Coder"
def call():
  global str
  str_local = "Programmer"
  str = str * 2
  print(str)
  print(str_local)
call()
#Same name variable for local&global
value = 3
def check():
  value = 30
  print("local value:", value)
check()
print("global value:", value)

########################################################

str = "Global"
def outer_func():
  str = "Outer"
  def inner_func():
    nonlocal str
    str = "Inner"
    print("Result from the inner function:", str)
  inner_func()
  print("Result from the outer function:", str)
outer_func()
print("Result from the global scope:", str)