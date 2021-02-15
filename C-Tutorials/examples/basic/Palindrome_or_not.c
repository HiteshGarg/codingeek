#include <stdio.h>
int main() {
    int x, reversedNumber = 0, remainder, originalNumber;
    printf("Enter an integer: ");
    scanf("%d", &x);
    originalNumber = x;

    // reversed integer is stored in reversedNumber
    while (x != 0) {
        remainder = x % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        x /= 10;
    }

    // condition is checked if the given number is palindrome or not.
    if (originalNumber == reversedNumber)
        printf("%d is a palindrome.", originalNumber);
    else
        printf("%d is not a palindrome.", originalNumber);

    return 0;
}
