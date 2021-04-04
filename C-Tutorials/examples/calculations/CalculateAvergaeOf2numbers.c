// using standard method
#include <stdio.h>
int main() {
  int number1, number2;
  float average;

  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d", &number2);

  average = (float)(number1 + number2) / 2;

  printf("The Average of %d and %d is: %.2f", number1, number2, average);

  return 0;
}

// using function
#include <stdio.h>
float average(int x, int y) { return (float)(x + y) / 2; }
int main() {
  int number1, number2;
  float avg;

  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d", &number2);

  avg = average(number1, number2);

  printf("The Average of %d and %d is: %.2f", number1, number2, avg);
  return 0;
}
