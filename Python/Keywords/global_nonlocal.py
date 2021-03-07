def func1():
    x = "Website"

    def func2():
        nonlocal x
        x = "Codingeek"

    def func3():
        x = "Working"
        global y
        y = "It's global"

    func2()
    func3()
    return x


print(func1())
print(y)