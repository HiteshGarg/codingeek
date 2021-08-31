list_1 = [10, 9, 8, 7]
try:
  print("First element in the list is= %d" %(list_1[0])
  print("second element in the list is= %d" %(list_1[1])
  print("Fourth element in the list is= %d" %(list_1[3])
  print("Fifth element in the list is= %d" %(list_1[4])        #Throws error
except IndexError:
    print("Exceeded Out of Limit.")

#######################################################

try:
    val = 19
    if val < 40:
        result = val / (val - 19)  # throws ZeroDivisionError

    if val >= 15:
        print("Result is = ", result)  # throws NameError

except(ZeroDivisionError, NameError):
    print("\nError Present but Resolved")

#########################################################

#Small example
try:
  print("Greetings for the day.")
except:
  print("We are sorry.")
else:
  print("All good")

###########################################################

def div(x, y):
    try:
        z = ((x + y) / (x - y))
    except ZeroDivisionError:
        print("Infinity")
    else:
        print(z)

# Driver code
div(1.0, 4.0)
div(2.0, 2.0)

##########################################################

try:
    n = 1 // 0  # zero exception error.
    print(n)

except ZeroDivisionError:
    print("Not divisible")

finally:  # block always executed
    print('Finally block always executed.')

##########################################################

try:
  raise NameError("Successfully Raised")  # Raise Error
except NameError:
  print("Something is wrong")
  raise # Rechecks if the exception was raised

##########################################################

try:
  amount = int(input("Enter amount:"))
  if(amount > 10000):
    raise ValueError
  else:
    print("Nice amount")
except ValueError:
  print("Amount more than limit")