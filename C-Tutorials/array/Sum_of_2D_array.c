#include <stdio.h>
int main() {
  // we initialize the first array and the second array will have user input
  // values
  int a[3][3] = {
      {1, 34, 5}, {7, 0, 15}, {23, 4, 6}}; // first array initialization
  int b[3][3], c[3][3], i, j;

  printf("Enter values in the 3x3 array:\n");

  for (i = 0; i < 3; i++) {   // outer loop for rows
    for (j = 0; j < 3; j++) { // inner loop for columns
      scanf("%d", &b[i][j]);
      c[i][j] = a[i][j] + b[i][j]; // summing up the values of the two arrays
    }
  }

  // displaying the array elements after summing up
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d  ", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
