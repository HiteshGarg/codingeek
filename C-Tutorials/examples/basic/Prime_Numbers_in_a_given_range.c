//using loop
#include <stdio.h>
void printPrime(int lowervalue, int uppervalue) {
  int i, j;
  for (i = lowervalue; i < uppervalue; ++i) {
    for (j = 2; j <= i / 2; ++j) {
      if (i % j == 0) {
        printf("%d, ", i);
        break;
      }
    }
  }
}
/*//using Functions
//We will just update the method printPrime as the main method will remain the same.
int isPrime(int number) {
  int k;
  for (k = 2; k <= number / 2; k++) {
    if (number % k == 0) {
      return 0;
    }
  }
  return 1;
}
void printPrime(int lowervalue, int uppervalue) {
  while (lowervalue <= uppervalue) {
    // Print if the current number is prime.
    if (isPrime(lowervalue)) {
      printf("%d, ", lowervalue);
    }
    lowervalue++;
  }
}*/

int main() {
  int lowervalue, uppervalue;
  printf("Enter the lower value and upper value : ");
  scanf("%d %d", &lowervalue, &uppervalue);
  printf("The Prime numbers from %d and %d are:\n", lowervalue, uppervalue);
  printPrime(lowervalue, uppervalue);
  return 0;
}
