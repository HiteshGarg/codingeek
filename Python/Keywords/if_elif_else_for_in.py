for i in range(10):
    if i % 2 == 0:  # checks the condition if true then print statement otherwise go to else condition
        print("Multiple of 2")
    elif i % 3 == 0:  # when if condition fails we come to elif where we can again check the condition and move forward
        print("Multiple of 3")
    else:  # if we reached here that means if condition was false and we will print the statement
        print("Not a multiple of either 2 or 3")
