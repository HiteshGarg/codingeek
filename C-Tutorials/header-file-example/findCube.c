#include "cube.h"
#include <stdio.h>
int main() {
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  printf("Cube of %d is %d", num, cube(num));
  return 0;
}
