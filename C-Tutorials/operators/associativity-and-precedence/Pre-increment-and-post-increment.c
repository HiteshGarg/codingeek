#include <stdio.h>
int main(void) {

  int x[] = {1, 2, 3, 4, 5};
  int *p;
  int i;
  p = x; // p pointing to same first index of array

  printf("Before Pointer operation:");
  for (i = 0; i < 5; i++)
    printf("%d ", *(p + i));

  printf("\nAfter post increment based Pointer operation:");
  printf("\n%d\n", *p++);
  /*only pointer will be incremented not the value and value printed will be of
   * *p without incremented address
   * (*p) and then p++
   * */

  for (i = 0; i < 4; i++)
    printf("%d ", *(p + i));

  printf("\nAfter pre increment based Pointer operation:");
  printf("\n%d\n", *++p);
  /* ++ and * both unary operator, same precedence. Associavity is right to left
   * content of p is read then increment done and then dereferenced i.e. access
   *the value
   *++p and then *p
   * */

  for (i = 0; i < 3; i++)
    printf("%d ", *(p + i));

  return 0;
}
