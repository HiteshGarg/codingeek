#include <stdio.h>

long fibonacci(int num) {

  long a = 0, b = 1, c = 0;
  if (num <= 1)
    return num;
  for (int i = 2; i <= num; i++) {
    c = a + b; // stores previous 2 values of the series i.e. a and b
    a = b;     // copy previous number to its previous number
    b = c;     // copy sum (c) to first previous number
  }
  return b;
}

long fibonacciRecursive(int num) {
  if (num <= 1)
    return num;
  return fibonacciRecursive(num - 1) + fibonacciRecursive(num - 2);
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("The %dth fibonacci number is %ld", num, fibonacci(num));
  printf("\nThe %dth fibonacci number is %ld", num, fibonacciRecursive(num));
  return 0;
}