class PowerfulError(Exception):
  print("Custom Error")
raise PowerfulError

##############################################

class PowerfulError(Exception):
    print("Calling Successful")
raise PowerfulError("Error Present")

##############################################

# User-defined Exceptions
class BaseError(Exception):
  pass  # Base Class
class HighValueError(BaseError):
  pass  # Raise for high input values
class LowValueError(BaseError):
  pass  # Raise for low input values
presentvalue = 29
while (1):
  try:
    give_no = int(input("Number please: "))
    if give_no > presentvalue:
      raise HighValueError
    elif give_no < presentvalue:
      raise LowValueError
    break
  except LowValueError:
    print("Very low, give input again please")
    print()
  except HighValueError:
    print("Too high, give input again please")
    print()
print("Nice! Correct answer.")

###############################################

class SumError(Exception):
    def __init__(self, sum, display="Sum is not even."):
        self.sum= sum
        self.display= display
        super().__init__(self.display)
sum = int(input("Enter any value "))
if not sum//2==0:
    raise SumError(sum)

###############################################

class ClassicError(RuntimeError):
    def __init__(self, s):
        self.args = s


try:
    raise ClassicError("Codingeek!")

except ClassicError as str:
    print(str.args)