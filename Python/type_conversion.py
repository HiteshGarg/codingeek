def any_datatype_to_integer():
    a = 2.5
    print("After converting a to int with base 10 --> ", int(a))

    b = "0101"
    print("After converting b to int with base 2 --> ", int(b, 2))

    c= "0101"
    print("After converting c to int without base --> ", int(c))

def any_datatype_to_float():
    a = 2
    print("After converting 'a' to float --> ", float(a))

    b = "0101"
    print("After converting 'b' to float --> ", float(b))

def character_to_integer():
    a = 'A'
    print(ord(a))

def integer_to_character():
    a = 65
    print(chr(a))

def integer_to_hexadecimal():
    a = 75
    print(hex(a))

def integer_to_octal():
    a = 75
    print(oct(a))

def datatype_to_tuple():
    a = "Codingeek"
    print(tuple(a))

    b = [10,7,"It's a beautiful day to save lives",2.0]
    print(tuple(b))

def datatype_to_set():
    a = "Codingeek"
    print(set(a))

    b = [10,7,10,"It's a beautiful day to save lives",2.0]
    print(set(b))

def datatype_to_list():
    a = "Codingeek"
    print(list(a))

    b = [10,7,10,"It's a beautiful day to save lives",2.0]
    print(list(b))

def datatype_to_dictionary():
    a = ((1,"Ross"),(2,"Rachel"),(3,"Friends"))
    print(dict(a))

    b = [[1,"Meredith"],[2,"Hayes"],[3,"Friends"]]
    print(dict(b))

def numeric_to_string():
    a = 10125
    print(str(a))

    b=[1,2,3,1,4]
    b = str(b)

    print(type(b), b)

def real_number_to_complex_number():
    a = complex(2,5)
    print(a)

if __name__ == '__main__':
    print("Converting any datatype to Integer")
    any_datatype_to_integer()

    print("\nConverting any datatype to float")
    any_datatype_to_float()

    print("\nConverting character to integer")
    character_to_integer()

    print("\nConverting integer to Character")
    integer_to_character()

    print("\nConverting integer to hexadecimal")
    integer_to_hexadecimal()

    print("\nConverting integer to octal")
    integer_to_octal()

    print("\nConverting any datatype to tuple")
    datatype_to_tuple()

    print("\nConverting any datatype to set")
    datatype_to_set()

    print("\nConverting any datatype to dictionary")
    datatype_to_dictionary()

    print("\nConverting any datatype to list")
    datatype_to_list()

    print("\nConverting numeric to string")
    numeric_to_string()

    print("\nConverting real numbers to complex numbers")
    real_number_to_complex_number()
