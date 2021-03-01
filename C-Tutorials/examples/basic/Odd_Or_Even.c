//using if-else
#include <stdio.h>
int number;
void oddOrEven() {
  if (number % 2 == 0) {
    printf("%d is even.", number);
  } else {
    printf("%d is odd.", number);
  }
}

//using bitwise operator
//void oddOrEven() {
// if (number & 1) {
// printf("Number is Odd");
// } else {
// printf("Number is Even");
// }
//}


int main() {
  printf("Enter the value: ");
  scanf("%d", &number);
  oddOrEven();
  return 0;
}
