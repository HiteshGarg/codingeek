# Single argument
val = 50
def value(val): return val-5
print(value(val))
# multiple argument
val_1 = 3
val_2 = 20
def value(val_2, val_1): return val_2-val_1
print(value(val_2, val_1))

######################################################

def easy_task(val):
  return lambda result: result+val
val_adder = easy_task(9)
print(val_adder(31))

######################################################

# Example of no Parameter Lambda function
call_it = lambda:'Coding home!'
print(call_it())

######################################################

result = (lambda val: val+val)(32)
print(result)

######################################################

def with_lambda(x): return x(10)
print("Square With lambda ", with_lambda(lambda x: x*x))
print("Cube With lambda ", with_lambda(lambda x: x*x*x))

######################################################

list_data = [3, 14, 21, 93, 64, 12, 37, 73, 69]
list_updated = list(filter(lambda n: (n % 2 == 0), list_data))
print(list_updated)

######################################################

list_data = [3, 14, 21, 93, 64, 12, 37, 73, 69]
list_updated = list(map(lambda n: (n%2 == 0) , list_data))
print(list_updated)
pet_list = ['dog', 'cat', 'parrot', 'rabbit', 'mouse', 'monkey']
cap_pet_list = list(map(lambda pet: str.upper(pet), pet_list))
print(cap_pet_list)

#######################################################

from functools import reduce
list_data = [3, 14, 21, 93, 64, 12, 37, 73, 69]
add_all = reduce((lambda n, m: n + m), list_data)
print("Sum elements in list is - ", add_all)