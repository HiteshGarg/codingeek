def single_variable_assignment_example():
    m = 500
    n = 2.5
    l = "It's a beautiful to save lives"
    print(m, n, l)


def assign_same_values_to_multiple_variables():
    m = n = l = 1
    print(m, n, l)


def assign_multiple_variables_of_same_data_type_example():
    m, n = 500, 600
    print(m, n)


def assign_multiple_variables_of_different_data_type_example():
    m, n, l, s = 25, "It's a beautiful day to save lives", 2.52, [2, 8, 9, 15]
    print(m, n, l, s)


def assign_multiple_variables_with_calculation_example():
    a, b = 10, 30
    m, n = a + b, b - a
    print(m, n)


if __name__ == '__main__':
    print("Single variable assignment")
    single_variable_assignment_example()

    print("\nAssign same values to multiple variables")
    assign_same_values_to_multiple_variables()

    print("\nAssign multiple variables of same data type")
    assign_multiple_variables_of_same_data_type_example()

    print("\nAssign multiple variables of different data type")
    assign_multiple_variables_of_different_data_type_example()

    print("\nAssign multiple variables with calculation")
    assign_multiple_variables_with_calculation_example()
