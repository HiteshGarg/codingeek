#include <stdio.h>
int main() {
  // the first array has been initialized.
  int a[3][3][3] = {{// set 1
                     {4, 10, 6},
                     {17, 0, 12},
                     {5, 56, 13}},
                    {// set 2
                     {10, 23, 15},
                     {2, 5, 9},
                     {1, 16, 20}},
                    {// set 3
                     {5, 16, 0},
                     {4, 35, 19},
                     {8, 13, 2}}};
  // second array shall have user input values and third array stores the sum of
  // the other two
  int b[3][3][3], c[3][3][3];
  int i, j, k;

  // input elements into the second array
  printf("Enter the elements in the array:\n");

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 3; k++) {
        scanf("%d", &b[i][j][k]);
        c[i][j][k] = a[i][j][k] + b[i][j][k]; // summing up the two arrays
      }
    }
  }

  printf("The sum of the two arrays : \n");

  for (i = 0; i < 3; i++) { // the outer loop is for the set of rows and columns
    for (j = 0; j < 3; j++) {   // this middle loop is for the rows
      for (k = 0; k < 3; k++) { // this inner loop is for the columns
        printf("%d   ", c[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
