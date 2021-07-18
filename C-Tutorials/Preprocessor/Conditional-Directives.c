#include <stdio.h>
#include <stdlib.h>
#define NUM 10
int main() {
  int square, cube;
#ifdef NUM
  square = NUM * NUM;
  printf("square is: %d", square);
#else
  cube = NUM * NUM * NUM;
  printf("Cube is: %d", cube);
#endif // NUM
  return 0;
}
