#include <stdio.h>

int main()
{
  //declaring the pointer for integer variable
  int a = 5, *x;

  //declaring the pointer for char variable
  char b = 'z', *y;

  //storing the memory location of variable a in pointer variable x
  x = &a;

  /*The corresponding values of the addition and subtraction operations on pointer variable x are given below*/
  //printing the actual value of x
  printf("x= %d\n", x);

  //the value incremented by 3
  printf("x+3= %d\n", x + 3);

  //the value decremented by 2
  printf("x-2= %d\n", x - 2);

  //storing the memory location of variable b in pointer variable y
  y = &b;

  /*The corresponding values of the addition and subtraction operations on pointer variable y are given below*/
  //printing the actual value of y
  printf("y= %d\n", y);

  //the value incremented by 3
  printf("y+3= %d\n", y + 3);

  //the value decremented by 2
  printf("y-2= %d\n", y - 2);
  return 0;
}
