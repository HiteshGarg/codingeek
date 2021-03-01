try:
    print("working inside try block")
    l = 20 / 0
    print("This line will not print")

except:
    print("Caught the exception")


finally:
    print("It Always print with or without error")

if True:
    raise Exception("Raising an exception")