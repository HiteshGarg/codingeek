def looping_through_list():
  x = [1,2,3,4,5,7]

  #using range() function
  for i in range(len(x)):
    print(x[i])

  #without using range() function
  for i in x:
    print(i)

def looping_through_string():
  x = "Codinggeek"

  #using range() function
  for i in range(len(x)):
    print(x[i])


  #without using range() function
  for i in x:
    print(i)

def looping_with_else():
  x = [1,2,3,4]


  for i in x :
    print(i)
  else:
    print("Codingeek")

  #breaking the loop in-between
  for i in x:
    if i>2:
      break
    print(i)
  else:
    print("Codingeek")

def looping_with_break():
  sum = 0
  for i in range(10):
    if sum>7:
      break
    sum+=i
    print(sum)

def looping_with_continue():
  for i in range(7):
    if i==2:
      continue
    print(i)

def looping_with_pass():
  for i in range(5):
    pass

if __name__=="__main__":
  print("Accessing list elements using for loop")
  looping_through_list()
  print("Accessing String using for loop")
  looping_through_string()
  print("using for loop with else statement")
  looping_with_else()
  print("using the break statement in for loop")
  looping_with_break()
  print("using the continue statement in for loop ")
  looping_with_continue()
  print("using the pass statement in for loop")
  looping_with_pass()




