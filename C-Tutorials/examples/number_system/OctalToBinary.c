#include <math.h>
#include <stdio.h>
long convertOctaltoBinary(int octal);

long convertOctaltoDecimal(int octal) {
  int decimal = 0, i = 0;
  while (octal != 0) {
    decimal += (octal % 10) * pow(8, i);
    ++i;
    octal /= 10;
  }
  return decimal;
}
long convertOctaltoBinary(int octal) {
  int i = 1;
  long binary = 0, decimal = convertOctaltoDecimal(octal);

  while (decimal != 0) {
    binary += (decimal % 2) * i;
    decimal /= 2;
    i *= 10;
  }
  return binary;
}
int main() {
  int octal;
  printf("Enter an octal number: ");
  scanf("%d", &octal);
  printf("%d in octal is %ld in binary", octal, convertOctaltoBinary(octal));
  return 0;
}