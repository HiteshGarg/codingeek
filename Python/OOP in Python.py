class Machine:
  motor = "DC"      # attribute inside the class
  def __init__(self, price, power, brand):       # instance attribute
    self.price = price
    self.power = power
    self.brand = brand

###################################################################

class Machine:
  motor = "DC"      # attribute inside the class
  def __init__(self, price, power, brand):       # instance attribute
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

###################################################################

class Machine:    # parent class
  def __init__(self):
    print("This is the parent class: Machine")
  def feature1(self):
    print("It has lots of features")
class SimpleMachine(Machine):   # child class
  def __init__(self):
    # call super() function
    super().__init__()
    print("This is the child class: Simplemachine")
  def feature2(self):
    print("It has less features")
simpleMachine = SimpleMachine()
simpleMachine.feature1()
simpleMachine.feature2()

#####################################################################

class Price:
    def __init__(self):
        self.__price = 1200

    def buy(self):
        print("Cost Price: {}".format(self.__price))

    def updatePrice(self, newPrice):
        self.__price = newPrice


p = Price()
p.buy()
p.__price = 1320  # Trying to modify value
p.buy()
p.updatePrice(2000)
p.buy()

######################################################################

class Bird:
    def intro(self):
        print("There are many types of birds.")

    def flight(self):
        print("Most of the birds can fly but some cannot.")


class Sparrow(Bird):
    def flight(self):
        print("Sparrows can fly.")


class Ostrich(Bird):
    def flight(self):
        print("Ostriches cannot fly.")


obj_bird = Bird()
obj_bird.intro()
obj_bird.flight()
obj_spr = Sparrow()
obj_spr.intro()
obj_spr.flight()
obj_ost = Ostrich()
obj_ost.intro()
obj_ost.flight()