def input_integer():
    a = int(input("Enter a number - "))
    print(type(a))

def input_list():
    a = list(map(int, input().split(" ")))
    print(a[2])

def concatenating_string():
    print("sum of 2 and 3 is " + str(2+3))
    # Using default value of sep parameter
    print("sum of 2 and 3 is", 2+3)
    # Using ' -- ' as the separator
    print("sum of 2 and 3 is", 2+3, sep = " -- ")
    # Using ' + ' as the separator and ' = ' as the line end
    print(1, 2, 3, 4, 5, sep = " + ", end = " = ")
    print(15)

def without_newline():
    print("It's a beautiful Day", end = " ")
    print("to save lives")
    print("It's a beautiful Day", end = " @ ")
    print("to save lives")

if __name__=="__main__":
    print("Taking integer as input :")
    input_integer()

    print("Taking list as input :")
    input_list()

    print("Concatenating two strings :")
    concatenating_string()

    print("Printing without using the newline :")
    without_newline()