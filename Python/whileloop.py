# An example for while loop
check = 10
while(check > 0):
  check = check - 2
  print(check, end=', ')
print()
# Illustration with list
list = [5, 6, 7, 8, 9]
while list:
  print(list.pop(), end=', ')
  
  
#single line while loop  
check = 12
while(check > 5): check = check - 2; print(check, end=', ')


# while-else loop
check = 0
while check < 10:
  check += 3
  print(check, end=', ')
else:  # This block will be executed since there is no break
  print("\nRunning else block without break")
check = 0
while check < 10:
  check += 2
  print(check, end=', ')
  break
else:  # This block will not be executed since there is break
  print("Running else  block")
  
# while-break statement
count = 3
while count >= 0:
  if count == 1:
    print("Start")
    break
  print(count)
  count = count-1  
    
# while-continue statement
count = 60
while count > 10:
  count -= 10
  if count == 30:
    continue
  print(count)  

# nested while loop
list1 = ['fruit', 'colour']
while len(list1):
  print(list1.pop(0))
  list2 = ['orange']
  while len(list2):
    print('--', list2.pop(0))
