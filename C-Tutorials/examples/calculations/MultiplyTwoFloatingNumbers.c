// using standard method
#include <stdio.h>
int main() {
  float number1, number2, Product;
  printf("Enter the first Number: ");
  scanf("%f", &number1);
  printf("Enter the second Number: ");
  scanf("%f", &number2);

  Product = number1 * number2;

  printf("The Product of the numbers is :%.3f", Product);
  return 0;
}

// using function
#include <stdio.h>
float multiply(float x, float y) { return x * y; }
int main() {
  float number1, number2, Product;
  printf("Enter the first Number: ");
  scanf("%f", &number1);
  printf("Enter the second Number: ");
  scanf("%f", &number2);

  Product = multiply(number1, number2);

  printf("The Product of the numbers is :%.3f", Product);
  return 0;
}
