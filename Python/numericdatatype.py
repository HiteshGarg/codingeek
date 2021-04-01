print(0b11101010)
print(0xFC + 0b11)
print(0o13)

number = 09456                #SyntaxError: leading zeros in decimal integer literals are not permitted; use an 0o prefix for octal integers

number = 12_34_56_78_90
print(number)

number = 9,456
print(number)

int('90')
int('-15')
int('7.8')
int("here it will fail")            #ValueError: invalid literal for int() with base 10: 'here it will fail'

f = 12_12.245_059
print(f)

float('4.5')
float('3')
float('-9')
float('1e4')
float('Infinity')

a = 9 + 4j
print(a)
(9+4j)
print(a)                 #SyntaxError: invalid syntax

int(5.3)
int(-7.2)
float(7)
complex('2+9j')

if (2.2 + 4.4) == 6.6:
   print("True")
else:
   print("False")
    
import fractions
print(fractions.Fraction(3.5))
print(fractions.Fraction(2,9))

from fractions import Fraction as f
print(f(2.2))
print(f('2.2'))

print(1 + 1)
print(2 - 1)
print(2 * 1)
print(4 / 2)
print(5 % 2)
print(3 ** 2)
print(5 // 2)
