#include <math.h>
#include <stdio.h>
long convertdecimaltobinary(int num);

long convertdecimaltobinary(int num) {
  long binary = 0;
  int rem, i = 1;
  int step = 1;
  while (num != 0) {
    rem = num % 2;
    printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, num, rem,
           num / 2);
    num /= 2;
    binary += rem * i;
    i *= 10;
  }
  return binary;
}

int main() {
  int num;
  printf("Enter any decimal number: ");
  scanf("%d", &num);
  printf("%d in decimal is %ld in binary", num, convertdecimaltobinary(num));
  return 0;
}
