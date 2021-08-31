import os

directory = "codingeek"
parent_dir = "C:/Users/ASUS/Documents/"       #For Example Purporse, path may vary.
path = os.path.join(parent_dir, directory)

# Create the directory
os.mkdir(path)
print("Successfully created '% s' directory" % directory)

directory = "Coder"
parent_dir = "C:/Users/ASUS/Documents/"      #For Example Purporse, path may vary.
mode = 0o456
path = os.path.join(parent_dir, directory)

# Create the directory with mode 0o456
os.mkdir(path, mode)
print("Successfully created '% s' directory" % directory)

#################################################################

import os

directory = "codingeek"
parent_dir = "C:/Users/ASUS/Documents/"
path = os.path.join(parent_dir, directory)

# Create the directory
os.mkdir(path)
print("Directory '% s' created" % directory)

# 'FileExistsError' will be raised if directory / file exists

# 'FileNotFoundError' will be raised if the specified path
# is invalid

#################################################################

import os
path = "C:/Users/ASUS/Documents/codingeek"
try:
    os.mkdir(path)
except OSError as negative:
    print(negative)

#################################################################

import os

directory = "Garvit"  # Leaf directory
parent_dir = "C:/Users/ASUS/Documents/codingeek/author"
path = os.path.join(parent_dir, directory)
os.makedirs(path)
print("Successfully created '% s' Directory" % directory)

# Directory 'codingeek' & 'author' will be created too
# if they do not exist

directory = "val"
parent_dir = "C:/Users/ASUS/Documents/codingeek/value"
mode = 0o644
path = os.path.join(parent_dir, directory)
os.makedirs(path, mode)
print("Successfully created '% s' Directory" % directory)

# If any intermediate directory is missing
# os.makedirs() method will create them

#######################################################################

import os
directory = "Garvit"
parent_dir = "C:/Users/ASUS/Documents/codingeek/author"
path = os.path.join(parent_dir, directory)
os.makedirs(path)
print("Successfully created '% s' Directory" % directory)

######################################################################

# importing os module
import os

# an OSError will be raised for creating an already existing
# directory. But It can be removed by setting the exist_ok as True
directory = "Garvit"
parent_dir = "C:/Users/ASUS/Documents/codingeek/author"
path = os.path.join(parent_dir, directory)
try:
    os.makedirs(path, exist_ok=True)
    print("Successfully created '% s' Directory" % directory)
except OSError as error:
    print("Task Unsuccessful")

#######################################################################

import os
print(os.getcwd())
print(os.getcwdb())

#######################################################################

import os
os.chdir('C:\\ASUS\\Python')
print(os.getcwd())

#######################################################################

import os
print(os.listdir())
print(os.listdir('D:\\'))

#######################################################################

import os
print(os.listdir())
os.rename('result','new_test')
print(os.listdir())

#######################################################################

import os
print(os.listdir())
os.remove('new_test.txt')
print(os.listdir())
os.rmdir('getnew')
print(os.listdir())