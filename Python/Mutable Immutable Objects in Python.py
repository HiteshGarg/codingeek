countries = ["India", "Germany", "US"]
for item in countries:
  print(item, end=" ")
print(hex(id(countries)))
print("\n")
countries.append("Russia")
for item in countries:
  print(item, end=" ")
print(hex(id(countries)))

###################################################

tuple_values = ("x", "y", "z")
tuple_values[2] = "w"
print(tuple_values)  #Error will be given

###################################################

subjects = (['Physics', 'Chemistry', 'Maths'], [
            'Physics', 'Chemistry', 'Biology'])
print(subjects)
# location ofcreated object in the memory address
print(hex(id(subjects)))
# Changing subject inside the 1st element
subjects[0][1] = "English"
print(subjects)
print(hex(id(subjects)))
