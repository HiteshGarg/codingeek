#include <stdio.h>
int main() {
  auto int a = 1, b;
  printf("%d\n", b);
  {
    auto int a = 5;
    printf("%d\n", a);
  }
  printf("%d", a);
  return 0;
}
