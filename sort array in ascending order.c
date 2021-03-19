#include <stdio.h>
int arr1[] = {5, 2, 8, 7, 1,9,59,48,62,878,66,4,55,223};
int temp = 0;
int length = sizeof(arr1)/sizeof(arr1[0]);
void sortInAscendingOrder(){
  for (int i = 0; i < length; i++) {
      printf("%d ", arr1[i]);
  }
  for (int i = 0; i < length; i++) {
      for (int j = i+1; j < length; j++) {
        if(arr1[i] > arr1[j]) {
          temp = arr1[i];
          arr1[i] = arr1[j];
          arr1[j] = temp;
          }
          }
          }
}
int main() {
  printf("Elements of original array: \n");
  sortInAscendingOrder();
  printf("\n");
  printf("The Elements of sorted array in ascending order are: \n");
  for (int i = 0; i < length; i++) {
      printf("%d ", arr1[i]);
  }
  return 0;
}
