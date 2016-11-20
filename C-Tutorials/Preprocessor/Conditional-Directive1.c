#include <stdio.h>
#include <stdlib.h>
#define NUM 10
int main()
{
  int square, cube;
  #if NUM>10
  square=NUM*NUM;
  printf("square is: %d",square);
  #else
  cube=NUM*NUM*NUM;
  printf("Cube is: %d",cube);
  #endif 
  return 0;
}
