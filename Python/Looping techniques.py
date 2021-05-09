# An infinite loop example
while True:  # we may write while(1)
  get_number = int(input("Give me a number input :"))
  print("Okay, so it is :", get_number)
  
count = 0                                     #Condition for the bottom
while(count <= 6):
  count = count + 1
  print("Hello", count)
  
while(1):                                     #Condition for the bottom
  age = input("Tell me your age ")
  print("Your age is :", age)
  restart = input("Should I ask you again?(Y/N) ")
  if restart == "N":
    break
    
while(1):                                     #Condition for the middle
  price = input("Enter integer value ")
  try:
    int(price)
    print("Valid input")
  except ValueError:
    print("Invalid input!!!")
    break    
  
for id, thing in enumerate(['coding', 'geek', 'best', 'website']):
  print(id, thing)

for item in enumerate(['coding', 'geek', 'best', 'website']):
  print(item)
  
for id, thing in enumerate('code'):
  print(id, thing)
  
for item in enumerate('code'):
  print(item)
  
values = [10, 50, 80, 20, 30, 40]
for value in sorted(values):
  print(value)
  
values = [10, 50, 80, 20, 30, 40]
for value in sorted(values, reverse=True):
  print(value)
  
names = ['ram', 'shyam', 'arman', 'ghanshyam']
surnames = ['verma', 'sharma', 'gupta']
for name, surname in zip(names, surnames):
  print(name, surname)
  
fruits = { "grapes":"green","apple":"red","mango":"yellow" }
for name,colour in fruits.items():
  print (colour,name)  
