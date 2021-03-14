#include <stdio.h>

void checkForLeapYear(int year) {
  if (year % 4 == 0 && year % 100 != 0) {
    printf("%d is a Leap Year", year);
  } else if (year % 100 == 0 && year % 400 == 0) {
    printf("%d is a Leap Year", year);
  } else {
    printf("%d is not a Leap Year", year);
  }
}

int main() {
  int year;
  printf("Enter year: ");
  scanf("%d", &year);
  checkForLeapYear(year);
  return 0;
}