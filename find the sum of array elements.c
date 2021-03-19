#include <stdio.h>
#define MAX_SIZE 1000
int arr1[MAX_SIZE];
int i, num, sum=0;
void calculateSumOfArray() {
  for(i=0; i<num; i++){
      scanf("%d", &arr1[i]);
      sum += arr1[i];
    }
}
int main() {
  printf("Enter size of the array: ");
  scanf("%d", &num);
  printf("Enter %d elements in the array: ", num);
  calculateSumOfArray();
  printf("The Sum of all the elements in the array are = %d", sum);
  return 0;
}
