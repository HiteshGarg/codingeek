#include <stdio.h>

int checkForArmstrong(int number) {
  int sum = 0, remainder;
  while (number != 0) {
    remainder = number % 10;
    sum = sum + (remainder * remainder * remainder);
    number = number / 10;
  }
  return sum;
}

int main() {
  int number, sum = 0;
  printf("\nEnter a number:");
  scanf("%d", &number);

  sum = checkForArmstrong(number);

  // Condition is evaluated for a number to be an armstrong number.
  if (number == sum) {
    printf("\n%d is an Armstrong Number", number);
  } else {
    printf("\n%d is not an Armstrong Number", number);
  }
  return (0);
}
