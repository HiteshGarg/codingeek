#include <stdio.h>

int main() {
  int ch, a = 16, b = 5;
  double result = 0.0;
  printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 "
         "for division :\n");
  scanf("%d", &ch);

  switch (ch) {
  case 1:
    result = 16 + 5;
    printf("The sum is: %f \n", result);
    break;
  case 2:
    result = 16 - 5;
    printf("The difference is: %f \n", result);
    break;
  case 3:
    result = 16 * 5;
    printf("The product is: %f \n", result);
    break;
  case 4:
    result = 16 / 5;
    printf("The quotient is: %f \n", result);
    break;
  default:
    printf("Wrong Choice\n");
  }
  return 0;
}
