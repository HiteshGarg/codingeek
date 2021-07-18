#include <math.h>
#include <stdio.h>

int binaryToDecimal(long num) {
  int decimal = 0, i = 0, rem;
  while (num != 0) {
    rem = num % 10;
    num /= 10;
    decimal += rem * pow(2, i++);
  }
  return decimal;
}

int convertBinarytoOctal(long binary) {
  int octal = 0, decimal = 0, i = 0;
  while (binary != 0) {
    int temp = binary % 1000;
    octal += binaryToDecimal(temp) * pow(10, i++);
    binary = binary / 1000;
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