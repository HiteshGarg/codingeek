// positive or negative Number using if-else-if
#include <stdio.h>
int num;
void checkIfNumberIsPositiveOrNegative() {
  if (num >= 0) {
    printf("number is positive.");
  } else if (num < 0) {
    printf("number is negative.");
  }
}
/*positive or negative Number using ternary operator.
->We will just update the method checkIfNumberIsPositiveOrNegative()as the main method will remain the same.

void checkIfNumberIsPositiveOrNegative() {
  num >= 0 ? printf("number is positive.") : printf("number is negative.");
}

*/

int main() {
  printf("Enter a number: ");
  scanf("%d", &num);
  checkIfNumberIsPositiveOrNegative();
  return 0;
}
