#include <math.h>
#include <stdio.h>

int convertBinarytoOctal(long binary) {
  int octal = 0, decimal = 0, i = 0;
  while (binary != 0) {
    decimal += (binary % 10) * pow(2, i++);
    binary /= 10;
  }
  i = 0;
  while (decimal != 0) {
    octal += (decimal % 8) * pow(10, i++);
    decimal /= 8;
  }
  return octal;
}

int main() {
  long binary;
  printf("Enter a binary number: ");
  scanf("%ld", &binary);
  printf("%ld in binary is %d in octal", binary, convertBinarytoOctal(binary));
  return 0;
}