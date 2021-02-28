#include <stdio.h>

int reverse;

// using recursion
void rev_num(int number) {
  if (number > 0) {
    reverse = (reverse * 10) + (number % 10);
    rev_num(number / 10); // recursive call
  }
}
// using while loop
// void rev_num(int number) {
//   while (number > 0) {
//     reverse = (reverse * 10) + (number % 10);
//     number /= 10;
//   }
// }

int main() {
  int num;
  printf("Enter a number:");
  scanf("%d", &num);
  rev_num(num);
  printf("Reverse Number is:%d\n", reverse);
  return 0;
}