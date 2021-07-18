#include <stdio.h>
void change() {
  auto int a = 1;
  static int b = 1;
  printf("%d   %d\n", a, b);
  a++;
  b++;
}
void main() {
  static int c;
  int i = 1;
  printf("%d\n", c);
  while (i <= 5) {
    change();
    i++;
  }
}
