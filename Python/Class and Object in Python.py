class SuperHuman:
  # attribute init
  name = "Bruce Wayne"
  power = "super strong"
  def tagline(self):
    print(f"My name is: {self.name}",
          f"and my character is {self.power}")
# Driver code
# initalising object
bat = SuperHuman()
bat.tagline()

#######################################################

class Employee:
  # init method/constructor
  def __init__(self, emp_name):
    print("__init__ => will do initializatioon tasks")
    self.name = emp_name
  def greet(self):
    print("Hello", self.name)
e1 = Employee('James')
e1.greet()

########################################################

class Coding:
  # Class Variable
  platform = "codingeek.com"
  # The init method or constructor
  def __init__(self, leader, team):
    # Instance Variables
    self.leader = leader
    self.team = team
# Objects of Dog class
member1 = Coding("A good leader", "A good team")
member2 = Coding("A better leader", "A better team")
print('Member 1 detail:')
print(member1.platform)
print(member1.leader)
print(member1.team)
print('\nMember 2 detail:')
print(member2.platform)
print(member2.leader)
print(member2.team)

###########################################################

class Machine:
  # attribute inside the class
  motor = "DC"
  def __init__(self, price, power, brand):
    # instance variables
    self.price = price
    self.power = power
    self.brand = brand
# Object instantiation
washing_machine = Machine(12000, "50 Watt", "Samsung")
air_conditioner = Machine(22000, "130 Watt", "Samsung")
# accessing each attribute of class
print("First machine: Price", washing_machine.price, "Power consumption",
      washing_machine.power, "Brand", washing_machine.brand)
print("Second machine: Price", air_conditioner.price, "Power consumption",
      air_conditioner.power, "Brand", air_conditioner.brand)

###############################################################

class MyCLass:
  def greet(self):
    return 'hello world'
x = MyCLass()
print(f"Direct functioon call - {x.greet()}")
# method object
xGreet = x.greet
print(f"Using method reference - {xGreet()}")