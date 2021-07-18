#include <stdio.h>
int main() {
  // we initialize the first array and the second array will have user input
  // values
  int a[3] = {1, 34, 5}; // first array initialization
  int b[3], c[3], i;

  printf("Enter values in the 3 element 1D array:\n");
  for (i = 0; i < 3; i++) { // loop for values input
    scanf("%d", &b[i]);
    c[i] = a[i] + b[i]; // summing up the values of the two arrays
  }

  printf("Resulting array after sum is");
  // displaying the array elements after summing up
  for (i = 0; i < 3; i++) {
    printf("%d  \n", c[i]);
  }
  return 0;
}
