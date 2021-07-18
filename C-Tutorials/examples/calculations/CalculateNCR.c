#include <stdio.h>
int fact(int n);

int nCr(int n, int r) { return fact(n) / (fact(r) * fact(n - r)); }

// This functions returns factorial of n
int fact(int n) {
  int res = 1;
  for (int i = 2; i <= n; i++) {
    res = res * i;
  }
  return res;
}

int main() {
  int n, r;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Enter the value of r: ");
  scanf("%d", &r);

  printf("The value of %dC%d is %d", n, r, nCr(n, r));
  return 0;
}