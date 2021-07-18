#include <math.h>
#include <stdio.h>

int convertDecimalToOctal(int decimalNum);

int convertDecimalToOctal(int decimalNum) {
  int octalNum = 0, i = 1;
  while (decimalNum != 0) {
    octalNum += (decimalNum % 8) * i;
    decimalNum /= 8;
    i *= 10;
  }
  return octalNum;
}
int main() {
  int decimalNum;
  printf("Enter any decimal number: ");
  scanf("%d", &decimalNum);
  printf("%d in decimal is %d in octal", decimalNum,
         convertDecimalToOctal(decimalNum));
  return 0;
}