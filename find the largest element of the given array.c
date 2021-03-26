#include <stdio.h>
int num;
int arr[100];
void checkLargestElement(){
  for (int i = 0; i < num; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  // here we store the largest number to arr[0].
  for (int i = 1; i < num; ++i) {
    if (arr[0] < arr[i]) {
        arr[0] = arr[i];
    }
    }
    }
int main() {
  printf("Enter the number of elements in the array: ");
  scanf("%d", &num);
  checkLargestElement();
  printf("The Largest element in the array is = %d", arr[0]);
  return 0;
}
