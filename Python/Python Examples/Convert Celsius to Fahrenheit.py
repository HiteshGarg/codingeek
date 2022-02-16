#Python Program to convert Celsius to Fahrenheit
temp_celsius = int(input("Enter temperature in Degree Celsius: "))

# Temperature in fahrenheit formula
temp_fahrenheit = (temp_celsius * 1.8) + 32
print(temp_celsius,"degree Celsius is equal to %0.1f degree Fahrenheit" %(temp_fahrenheit))

#########################################################################################

# Python Program to convert Celsius to Fahrenheit using Function
def convert_temp(temp_celsius):
  return (temp_celsius * 1.8) + 32


temp_celsius = int(input("Enter temperature in Degree Celsius: "))
print(temp_celsius, "degree Celsius is equal to %0.1f degree Fahrenheit" % (convert_temp(temp_celsius)))