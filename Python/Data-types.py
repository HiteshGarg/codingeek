def integer_data_type_example():
    number1 = 10
    print("\t" + str(number1) + " is a " + str(type(number1)))

    number2 = -10
    print("\t" + str(number2) + " is a " + str(type(number2)))

    number3 = 48697
    print("\t" + str(number3) + " is a " + str(type(number3)))

    number4 = -14589
    print("\t" + str(number4) + " is a " + str(type(number4)))


def decimal_data_type_example():
    number1 = 2.3
    print("\t" + str(number1) + " is a " + str(type(number1)))

    number2 = -5.9
    print("\t" + str(number2) + " is a " + str(type(number2)))

    number3 = 4e23
    print("\t" + str(number3) + " is a " + str(type(number3)))

    number4 = -4e+23
    print("\t" + str(number4) + " is a " + str(type(number4)))


def complex_number_data_type_example():
    number1 = 2 + 3j
    print("\t" + str(number1) + " is a " + str(type(number1)))

    number2 = 5.89j
    print("\t" + str(number2) + " is a " + str(type(number2)))

    number3 = 5 - 7j
    print("\t" + str(number3) + " is a " + str(type(number3)))

    number4 = 1j
    print("\t" + str(number4) + " is a " + str(type(number4)))


def string_data_type_example():
    sentence1 = "It's a Beautiful Day to Save lives"
    print("\t" + str(sentence1) + " is a " + str(type(sentence1)))

    sentence2 = 'Dance it out'
    print("\t" + str(sentence2) + " is a " + str(type(sentence2)))


def list_data_type_example():
    list1 = [2, 4, 5, 2]
    print("\t" + str(list1) + " is a " + str(type(list1)))

    list2 = list()
    print("\t" + str(list2) + " is a " + str(type(list2)))

    list3 = ["Hello", 5, -7]
    print("\t" + str(list3) + " is a " + str(type(list3)))
    print("\t list3[1] =" + str(list3[1]))  # If we want to access the second element


def tuple_data_type_example():
    tuple1 = (1, "Hello", -5, 1)
    print("\t" + str(tuple1) + " is a " + str(type(tuple1)))

    tuple2 = ()
    print("\t" + str(tuple2) + " is a " + str(type(tuple2)))

    tuple3 = ("Name",)
    print("\t" + str(tuple3) + " is a " + str(type(tuple3)))


def set_data_type_example():
    set1 = {5, "MerDer", 7.0}
    print("\t" + str(set1) + " is a " + str(type(set1)))

    set2 = {"I ", "am", "your", "person"}
    print("\t" + str(set2) + " is a " + str(type(set2)))

    set2 = frozenset(set2)
    print("\t" + str(set2) + " is a " + str(type(set2)))


def dictionary_data_type_example():
    dictionary1 = {1: "MerDer", 2: "MerDer"}
    print("\t" + str(dictionary1) + " is a " + str(type(dictionary1)))

    dictionary2 = {}
    print("\t" + str(dictionary2) + " is a " + str(type(dictionary2)))

    dictionary3 = {"Derek": "It's a beautiful day to save lives", 143: "Meredith"}
    print("\t" + str(dictionary3) + " is a " + str(type(dictionary3)))


def Boolean():
    a = True
    print("\t" + str(a) + " is a " + str(type(a)))
    b = False
    print("\t" + str(b) + " is a " + str(type(b)))


if __name__ == '__main__':
    print("Number : ")
    print("Integer :")
    integer_data_type_example()

    print("Decimal :")
    decimal_data_type_example()

    print("Complex Numbers :")
    complex_number_data_type_example()

    print("String :")
    string_data_type_example()

    print("List :")
    list_data_type_example()

    print("Tuple :")
    tuple_data_type_example()

    print("Set :")
    set_data_type_example()

    print("Dictionary :")
    dictionary_data_type_example()
