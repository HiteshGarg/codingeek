#include <stdio.h>
int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arrayLength = sizeof(arr) / sizeof(arr[0]);

  printf("Number of elements present in the given array is: %d", arrayLength);
  return 0;
}