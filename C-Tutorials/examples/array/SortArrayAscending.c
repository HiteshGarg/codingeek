#include <stdio.h>
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
void selectionSort(int arr[], int n) {
  int i, j, minIndex;
  // After every iteration size of sorted array increases by one
  for (i = 0; i < n - 1; i++) {
    // Find the minimum element in unsorted array
    minIndex = i;
    for (j = i + 1; j < n; j++)
      if (arr[j] < arr[minIndex])
        minIndex = j;
    // Swap the found minimum element with the first element
    swap(&arr[minIndex], &arr[i]);
  }
}
// Function to print an array
void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("");
}
// Main function to test above implemented methods
int main() {
  int arr[] = {9, 4, 2, 3, 6, 5, 7, 1, 8, 0};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Original Array: \n");
  printArray(arr, n);
  selectionSort(arr, n);
  printf("\n\nSorted array: \n");
  printArray(arr, n);
  return 0;
}