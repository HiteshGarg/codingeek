def and_or_not_True_False():
    # and returns true if both the operands are true else it returns false
    print(True and False)

    # or returns true if any of the operands are true else it returns false
    print(True or False)

    # not returns the opposite  True--> False   False--> True
    print(not True)


def if_elif_else_for_in():
    for i in range(10):
        if i % 2 == 0:  # checks the condition if true then print statement otherwise go to else condition
            print("Multiple of 2")
        elif i % 3 == 0:  # when if condition fails we come to elif where we can again check the condition and move forward
            print("Multiple of 3")
        else:  # if we reached here that means if condition was false and we will print the statement
            print("Not a multiple of either 2 or 3")


def while_pass_break_continue():
    count = 1
    while True:
        if count % 2 == 0:  # if count is a multiple of 2 then without printing anything go to next iteration
            count += 1
            continue
        elif count % 3 == 0:  # if count is a multiple of 3 then don't do anything
            pass
        else:
            print(count)
        if count > 10:  # if count is greater than 10 break the loop
            break
        else:
            count += 1


if __name__ == '__main__':
    print("Check for Python keywords - and, or, nott, True, False")
    and_or_not_True_False()

    print("\n\nCheck for Python keywords - if, elif, else, for, in")
    if_elif_else_for_in()

    print("\n\nCheck for Python keywords - while, pass, break, continue")
    while_pass_break_continue()

