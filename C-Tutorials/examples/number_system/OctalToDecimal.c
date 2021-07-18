#include <math.h>
#include <stdio.h>

long convertOctalToDecimal(int octalNum);

long convertOctalToDecimal(int octalNum) {
  int decimalNum = 0, i = 0;
  while (octalNum != 0) {
    decimalNum += (octalNum % 10) * pow(8, i);
    ++i;
    octalNum /= 10;
  }
  i = 1;
  return decimalNum;
}

int main() {
  int octalNum;
  printf("Enter an octal number: ");
  scanf("%d", &octalNum);
  printf("%d in octal is %ld in decimal", octalNum,
         convertOctalToDecimal(octalNum));
  return 0;
}