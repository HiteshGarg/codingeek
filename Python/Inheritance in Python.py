class Employee:
  def __init__(self, dept, salary):
    self.department = dept
    self.income = salary
  def displaydetails(self):
    print("Department and income of employee are: ",
          self.department, " ", self.income)
class Manager(Employee):
  pass
emp = Employee(1024, 7500000)
emp.displaydetails()
manager = Manager(1031, 8600000)
manager.displaydetails()

##############################################################

class Machine:    # parent class
  def __init__(self):
    print("This is the parent class: Machine")
  def feature1(self):
    print("Machine has feature1")
class SimpleMachine(Machine):    # child class
  def __init__(self):
    # call super() function
    Machine.__init__(self)
    print("This is the child class: Simplemachine")
  def feature2(self):
    print("SimpleMachine has feature2")
m1 = SimpleMachine()
m1.feature1()
m1.feature2()

###############################################################

class Employee:
    def __init__(self, dept, salary):
        self.department = dept
        self.income = salary

    def display_details(self):
        print("Department and income of employee are: ", self.department, " ", self.income)


class Staff(Employee):
    def __init__(self, dept, salary, nameofemp):
        super().__init__(dept, salary)
        self.name = nameofemp

    def display_name(self):
        print("Welcome", self.name, ", your department is:", self.department, " and your salary is", self.income)


print("Employee")
emp = Employee(1024, 7500000)
emp.display_details()
print("\nStaff")
stf = Staff(1031, 8600000, "Jordan")
stf.display_details()
stf.display_name()

#################################################################

class A():
  def __init__(self):
    self.val1 = 2
class B(A):
  def __init__(self):
    A.__init__(self)
refA = A()
refB = B()
print(f"Is refA instance of A - {isinstance(refA, A)}")
print(f"Is refA instance of B - {isinstance(refA, B)}")
print(f"Is refB instance of A - {isinstance(refB, A)}")
print(f"Is refB instance of B - {isinstance(refB, B)}")
print(f"Is A subclass of B - {issubclass(A, B)}")
print(f"Is B subclass of A - {issubclass(B, A)}")

##################################################################

class A():
  def __init__(self):
    self.val1 = 2
    # d is private instance variable
    self.__val2 = 8
class B(A):
  def __init__(self):
    self.val3 = 4
    A.__init__(self)
ref = B()
print(ref.val2) # Error