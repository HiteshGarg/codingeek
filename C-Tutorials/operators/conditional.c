#include <stdio.h>

int main() {
  int a = 17, b = 16, c = 30, d;

  d = (a > b ? a : b); // simple ternary operator
  printf("the bigger number is: %d\n", d);

  d = (a > b ? (a > c ? a : c) : (b > c ? b : c)); // nested ternary operator
  printf("the largest number is: %d", d);

  return 0;
}
