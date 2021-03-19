#include <stdio.h>
int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int length_array;
//Function to calculate the number of elements in the array
void findLengthOfanArray() {
  length_array = sizeof(arr1) / sizeof(arr1[0]);
}
int main() {
  findLengthOfanArray();
  printf("Number of elements present in the given array is: %d", length_array);
  return 0;
}
