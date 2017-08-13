#include <stdio.h>

int main(void){		
  
  int a = 1, b = 2, c = 3, x;
  x = (a, b, c); //discards a and b, assign c to x
  printf("x = %d", x);

}