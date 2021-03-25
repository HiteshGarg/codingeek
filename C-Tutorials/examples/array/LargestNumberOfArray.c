#include <stdio.h>
int num;
int largestNumber;
int arr[100];

void checkLargestElement() {
  largestNumber = arr[0];
  // here we store the largest number to arr[0].
  for (int i = 1; i < num; ++i) {
    if (largestNumber < arr[i]) {
      largestNumber = arr[i];
    }
  }
}
void readArrayElements() {
  for (int i = 0; i < num; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
  }
}

int main() {
  printf("Enter the number of elements in the array: ");
  scanf("%d", &num);
  readArrayElements();
  checkLargestElement();
  printf("The Largest element in the array is = %d", largestNumber);
  return 0;
}