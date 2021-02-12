#include <stdio.h>

int main() {
  //declaring the pointer for integer variable
  int a = 5, * x;

  //declaring the pointer for char variable
  char b = 'z', * y;

  //storing the memory location of variable a in pointer variable x
  x = & a;

  /*The corresponding values of the increment and decrement operations on pointer variable x are given below*/
  //printing the actual value of x
  printf("x= %d\n", x);

  //the value gets incremented by 4 bytes because the size of one int variable is 4 bytes
  x++;
  printf("x++= %d\n", x);

  //the value gets decremented by 4 bytes and changes back to the original value
  x--;
  printf("x--= %d\n", x);

  //storing the memory location of variable b in pointer variable y
  y = & b;

  /*The corresponding values of the increment and decrement operations on pointer variable y are given below*/
  //printing the actual value of y
  printf("y= %d\n", y);

  //the value gets incremented by 1 byte because the size of one char variable is 1 bytes
  y++;
  printf("y++= %d\n", y);

  //the value gets decremented by 1 byte and changes back to the original value
  y--;
  printf("y--= %d\n", y);

  return 0;
}
