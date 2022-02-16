# Python program to solve quadratic equation using formula
import math

# Finding the roots using the Function
def roots_of_equation(a, b, c):
  # Finding the value of Discriminant D
  D = b * b - 4 * a * c
  # other way, D = b**2 - 4*a*c

  sqrt_D = math.sqrt(abs(D))

  # checking Discriminant condition
  if D > 0:
    print("Roots are Real and Different ")
    print((-b + sqrt_D) / (2 * a))
    print((-b - sqrt_D) / (2 * a))

  elif D == 0:
    print(" real and same roots")
    print(-b / (2 * a))

    # Discriminant < 0 follows else block

  else:
    print("Complex Roots")
    print(- b / (2 * a), " + i", sqrt_D)
    print(- b / (2 * a), " - i", sqrt_D)


# MAIN

a = 4
b = 4
c = 3

# We can ask the user for value for a, b, c

# If a is given 0, then Equation is incorrect
if a == 0:
  print("Please input correct Quadratic Equation")
else:
  roots_of_equation(a, b, c)

#####################################################################################

# Python program to solve quadratic equation using math module
import cmath

print("The Quadratic Equation is of form ax2 + bx+ c\n")
a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))
c = int(input("Enter the value of c: "))

# Computing the Discriminant value
D = (b ** 2) - (4 * a * c)

# find two results
root1 = (-b - cmath.sqrt(D)) / (2 * a)
root2 = (-b + cmath.sqrt(D)) / (2 * a)

# printing the results
print("The roots are: ")
print(root1)
print(root2)