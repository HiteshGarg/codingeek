# Python program to convret kilometers into miles
kilo_mtr = int(input("Enter distance value in kilometer: "))

mile = 0.621371 * kilo_mtr
print("Distance in Miles is: ", mile)

##############################################################

# Python program to convret kilometers into miles  using function
def convert_to_miles(kilo_mtr):
  return 0.621371 * kilo_mtr


kilo_mtr = int(input("Enter distance value in kilometer: "))

print("Distance in Miles is: ", convert_to_miles(kilo_mtr))