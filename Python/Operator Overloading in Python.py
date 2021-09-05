class OperatorOverloadTest:
  def __init__(self, code):
    self.code = code
  def __add__(self, obj):
    """add two objects"""
    return self.code + obj.code
inst1 = OperatorOverloadTest(2)
inst2 = OperatorOverloadTest(4)
inst4 = OperatorOverloadTest("codingeek")
inst5 = OperatorOverloadTest(".com")
print(inst1 + inst2)
print(inst4 + inst5)

#########################################################

# + operator overloading.
class AddTuples:
  def __init__(self, val1, val2):
    self.val1 = val1
    self.val2 = val2
  def __add__(self, additional):
    """adding two objects"""
    return self.val1 + additional.val1, self.val2 + additional.val2
add1 = AddTuples(3, 7)
add2 = AddTuples(9, 1)
add3 = add1 + add2
print(add3)

#########################################################

class GreaterThanOperatorOverload:
  def __init__(self, val):
    self.val = val
  def __gt__(self, extra):
    if(self.val > extra.val):
      return True
    else:
      return False
c1 = GreaterThanOperatorOverload(3)
c2 = GreaterThanOperatorOverload(7)
print(f"c1 > c2 => {c1 > c2}")
print(f"c2 > c1 => {c2 > c1}")

########################################################

class OperatorOverloadTest:
  def __init__(self, val):
    self.val = val
  def __lt__(self, additional):
    return True if self.val < additional.val else False
  def __eq__(self, additional):
    return True if self.val == additional.val else False

r1 = OperatorOverloadTest(3)
r2 = OperatorOverloadTest(9)
r3 = OperatorOverloadTest(4)
r4 = OperatorOverloadTest(4)
print(f"Is r1 < r2 => {r1 < r2}")
print(f"Is r1 < r3 => {r1 < r3}")
print(f"Is r1 < r4 => {r1 < r4}")
print(f"Is r1 == r4 => {r1 == r4}")
print(f"Is r2 == r4 => {r2 == r4}")
print(f"Is r3 == r4 => {r3 == r4}")
print(f"Is r3 == r1 => {r3 == r1}")
