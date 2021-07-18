#include <stdio.h>
int main() {
  int i, j;
  for (i = 1; i < 5; i++) {
    if (i == 2)
      goto there;
    printf("%d\n", i);
  }
there:
  printf("Two");
  return 0;
}
