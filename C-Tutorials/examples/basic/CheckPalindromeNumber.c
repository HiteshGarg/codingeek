#include <math.h>
#include <stdio.h>

int reverse(int number);
int isPalindrome(int number);

int main() {
  int number;

  // Input is entered by the user
  printf("Enter an Integer:");
  scanf("%d", &number);

  // Condition is verified for a number to be a palindrome or not
  if (isPalindrome(number) == 1) {
    printf("%d is a Palindrome number.\n", number);
  } else {
    printf("%d is not Palindrome number.\n", number);
  }
  return 0;
}

// Recursive function to find reverse of any number
int reverse(int number) {
  // Finding the number of digits in numbers
  int digits = (int)log10(number);
  if (number == 0)
    return 0;

  return ((number % 10 * pow(10, digits)) + reverse(number / 10));
}

// Function to verify whether a number is a palindrome or not.
// This function returns 1 if the number is palindrome or else it will return 0.
int isPalindrome(int number) {
  // Check if the given number is equal to its reverse.

  if (number == reverse(number)) {
    return 1;
  }
  return 0;
}