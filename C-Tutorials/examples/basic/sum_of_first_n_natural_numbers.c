#include <stdio.h>

void sumOfNaturalNumber_UsingLoop(long number)
{
    long counter = 1, sum = 0;

    // loop till counter becomes the ending number
    while (counter <= number)
    {
        // Add the counter to sum
        sum = sum + counter; 
        counter++; // increment the counter
    }
    printf("Sum of Natural Numbers from 1 to %ld is : %ld\n", number, sum);
}

void sumOfNaturalNumber_UsingFormula(long number)
{
    long sum = (number * (number + 1)) / 2;
    printf("Sum of Natural Numbers from 1 to %ld is : %ld\n", number, sum);
}

int main()
{
    long number;
    printf("Enter the number :\n");
    scanf("%ld", &number); 

    sumOfNaturalNumber_UsingLoop(number);

    sumOfNaturalNumber_UsingFormula(number);

    return 0;
}
