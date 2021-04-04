#include <stdio.h>

void swapNumbers(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int number1, number2;
  printf("Enter the value of number1: ");
  scanf("%d", &number1);
  printf("Enter the value of number2: ");
  scanf("%d", &number2);

  printf("Before Swapping the numbers: number1 is: %d, number2 is: %d\n",
         number1, number2);

  swapNumbers(&number1, &number2);

  printf("After Swapping the numbers we have: number1 is: %d, number2 is: %d\n",
         number1, number2);
  return 0;
}
