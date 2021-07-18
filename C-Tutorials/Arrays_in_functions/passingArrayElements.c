#include <stdio.h>
void display(int); // declaration of a function with a single integer argument
int main() {
  int i, num[5]; // taking an array of size 5
  printf("Enter 5 elements in an array:\n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &num[i]);
  }
  printf("The array is:\n");
  for (i = 0; i < 5; i++) {
    display(num[i]); // a single element is being sent to the function to get
                     // displayed
  }
  return 0;
}
void display(
    int x) // formal parameter takes a single variable and not a whole array
{
  printf("%d\n", x); // displaying elements of the array
}
