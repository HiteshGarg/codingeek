# Python Program to calculate area of triangle using Heron's formula

s1 = float(input("Enter first side value: "))
s2 = float(input("Enter second side value: "))
s3 = float(input("Enter third side value: "))

# semi-perimeter s
s = (s1 + s2 + s3) / 2

area_triangle = (s * (s - s1) * (s - s2) * (s - s3)) ** 0.5
print("The area of the triangle is: ", area_triangle)

###################################################################

base = int(input("Enter the base: "))
height = int(input("Enter the height: "))

#Float Division
area = (base*height)/2
print("\nArea of the right angled triangle is: ",area)

######################################################