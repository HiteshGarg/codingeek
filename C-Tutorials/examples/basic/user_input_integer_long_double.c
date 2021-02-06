#include <stdio.h>

void user_input_integer()
{
    int number;

    printf("Enter an integer: ");

    // reads and stores input
    scanf("%d", &number);

    // displays output
    printf("\nYou entered: %d", number);
    printf("\nSquare of entered integer: %d", number * number);
}
void user_input_long()
{
    long number;

    printf("Enter a long: ");

    // reads and stores input
    scanf("%ld", &number);

    // displays output
    printf("\nYou entered: %ld", number);
    printf("\nSquare of entered long: %ld", number * number);
}

void user_input_double()
{
    double number;

    printf("Enter a double: ");
    scanf("%lf", &number);

    printf("\nYou entered: %lf", number);
    printf("\nSquare of entered long: %lf", number * number);
}

int main()
{
    printf("Testing for integer...\n");
    user_input_integer();
    printf("\n\nTesting for long...\n");
    user_input_long();
    printf("\n\nTesting for double...\n");
    user_input_double();
    return 0;
}
