small_list = ["I", "am", "coding", "and", "learning"]
iterable_variable = iter(small_list)
print(next(iterable_variable))
print(next(iterable_variable))
print(next(iterable_variable))
print(next(iterable_variable))
print(next(iterable_variable))

######################################################

number_list = [3, 9, 81, 1729]
iterable_variable = number_list.__iter__()
# next(obj) is same as obj.__next__()
print(iterable_variable.__next__())
print(iterable_variable.__next__())
print(iterable_variable.__next__())
print(iterable_variable.__next__())

#####################################################

# EXAMPLE
# for any_variable in any_iterable:
# pass
# Actual implementation of for loop
iterable_object = iter(any_iterable)
while True:                # infinite loop
  try:
    # getting any next item
    each_value = next(iterable_object)
    # statements
  except StopIteration:
    # if StopIteration raised, break the loop
    break

#####################################################

class Run:
  def __init__(self, highest):
    self.highest = highest
  # Creating an iterator object
  def __iter__(self):
    self.value = 0
    return self
  # To move to next element using __next__
  def __next__(self):
    # Storing the current i value
    value = self.value
    # Stop iteration if limit is reached
    if value > self.highest:
      raise StopIteration
    # increment & return old value
    self.value = value + 15
    return value
# Outputs the numbers
for x in Run(140):
  print(x)
print("\n")
# One output
for i in Run(5):
  print(i)

###################################################

int()
infinite_trap = iter(int,1)
print(next(infinite_trap))
print(next(infinite_trap))
print(next(infinite_trap))
print(next(infinite_trap))
print(next(infinite_trap))
print(next(infinite_trap))

###################################################

class user_iterator:
  def __iter__(self):
    self.value = 0
    return self
  def __next__(self):
    value = self.value
    self.value += 3
    return value
call = iter(user_iterator())
print(next(call))
print(next(call))
print(next(call))
print(next(call))
print(next(call))

###################################################

