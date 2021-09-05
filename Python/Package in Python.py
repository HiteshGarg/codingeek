#name.py file
def callname(name):
  print("You are ", name)
#mathematics.py file
def addition(a,b):
  return a+b
def power(a,b):
  return a**b
def multiply(a,b):
  return a*b

################################

from readytogo import mathematics
mathematics.multiply(4,5)

#################################

from .mathematics import power
from .name import callname

#################################

import sound.effects.echo                     #Example based import
import sound.effects.surround
from sound.effects import *