#include <stdio.h>

int *p1, *p2, *p3;

void largestNumber() {
  if (*p1 > *p2) {
    if (*p1 > *p3) {
      printf("%d is the largest number", *p1);
    } else {
      printf("%d is the largest number", *p3);
    }
  } else {
    if (*p2 > *p3) {
      printf("%d is the largest number", *p2);
    } else {
      printf("%d is the largest number", *p3);
    }
  }
}
int main() {

  int number1, number2, number3;
  printf("Enter the First Number: ");
  scanf("%d", &number1);
  printf("Enter the Second Number: ");
  scanf("%d", &number2);
  printf("Enter the Third Number: ");
  scanf("%d", &number3);

  p1 = &number1;
  p2 = &number2;
  p3 = &number3;
  largestNumber();
  return 0;
}
