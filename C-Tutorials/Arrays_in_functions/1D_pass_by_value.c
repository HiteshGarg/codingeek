#include <stdio.h>
void access(int[]); // declaring an array function. Parentheses indicates that
                    // an array shall be passed in the function
int main() {
  int a[5], i;
  printf("Enter 5 elements in the array:\n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }
  access(a); // here we are passing the whole array a and not individual
             // elements
  return 0;
}
void access(int a[5]) // the formal parameter has a sized array
{
  int i;
  printf("The array elements are as follows:\n");
  for (i = 0; i < 5; i++)
    printf("%d\n", a[i]); // displaying all the elements in the array
}
