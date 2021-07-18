#include <stdio.h>
int main() {
  int num[10] = {1, 5, 9, 4, 8, 3, 0, 2, 6, 7}, *a, *b;

  // storing the address of num[2] in variable a
  a = &num[2];

  // storing the address of num[6] in variable b
  b = &num[6];

  printf("a = %d\n", a);
  printf("b = %d\n", b);

  // prints the number of elements between the two elements indicated by the
  // pointers
  printf("a-b = %d\n", b - a);

  // prints the difference in value of the two elements
  printf("*a-*b = %d\n", *a - *b);

  return 0;
}
