#include <stdio.h>

int fact(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * fact(n - 1);
}

int nPr(int n, int r) { return fact(n) / fact(n - r); }

int main() {
  int n, r;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Enter the value of r: ");
  scanf("%d", &r);

  printf("The value of %dP%d is %d", n, r, nPr(n, r));
  return 0;
}