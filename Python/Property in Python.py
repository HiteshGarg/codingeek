class SimpleInterest:
  def __init__(self, simple_interest):
    self.simple_interest = simple_interest
  def find_principle(self, t=1, r=5):
    return (self.simple_interest * 100)/5*1
value = SimpleInterest(4000)
print("The simple interest is: ", value.simple_interest)
print("The principle amount is: ", value.find_principle())

###########################################################

class SimpleInterest:
  def __init__(self, simple_interest):
    self.simple_interest = simple_interest
  def find_principle(self, t=1, r=5):
    return (self.simple_interest * 100)/5*1
value = SimpleInterest(4000)
print("The simple interest is: ", value.simple_interest)
print("The principle amount is: ", value.find_principle())
print(value.__dict__)

###########################################################

class TempCelsius:
  def __init__(self, temp=0):
    self.setter_temp(temp)
  # getter method
  def getter_temp(self):
    return self.__temperature
  # setter method
  def setter_temp(self, giventemp):
    if giventemp < -273.15:
      raise ValueError("Temperature below -273.15 is not possible.")
    self.__temperature = giventemp
# Create a new object
valuerecorded = TempCelsius(-370)
print(valuerecorded.getter_temp()) # Gives Error


