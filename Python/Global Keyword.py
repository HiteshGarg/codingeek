count = 5
def check():
    print('Running at', count)
check()

##########################################

count = 5
def change():
  count = count - 1
  print(count)
change()          #UnboundLocalError

###########################################

count = 5
def change():
  global count
  count = count - 1
  print(count)
change()

#############################################

# Create a collect.py file
val_1 = 0
val_2 = "empty"
val_3 = 1

# Create a growth.py file
import collect
collect.val_1 = 2
collect.val_2 = "alpha"

# Create main.py file
import collect
import growth
print(collect.val_1)
print(collect.val_2)
print(collect.val_3)

################################################

value = "Global"


def outer():
    value = "Local"

    def change_val_global():
        global value
        value = value * 2
        print("Change global - ", value)

    change_val_global()


outer()