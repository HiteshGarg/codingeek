# Generator function
def func():
  val = 5
  print('First value')
  yield val
  val -= 2
  print('Second value')
  yield val
  val -= 1
  print('Third value')
  yield val
x = func()
next(x)
next(x)
next(x)

#################################################

#PREVIOUS EXAMPLE
def func():
  ...
x = func()
next(x)
next(x)
next(x)
next(x)  # This line will raise error

################################################

# NEW METHOD
def string_reverse(input):
  for x in input.split(' '):
    yield x
print("The output from for loop: ")
for word in string_reverse("test generator with for loop"):
  print(word)

#################################################

def double(val):
  for n in range(val):
    yield n+n
create = double(10)
while True:
  try:
    print("Value from next: ", next(create))
  except StopIteration:
    break

##################################################

value = [2, 4, 8, 16]
x = (i**3 for i in value)
print(next(x))
print(next(x))
print(next(x))
print(next(x))
print(next(x))
