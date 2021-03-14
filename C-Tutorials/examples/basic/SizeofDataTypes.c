#include <stdio.h>
int main() {
  int integerType;
  float floatType;
  double doubleType;
  char characterType;

  // sizeof evaluates the size of a the data type.
  printf("The Size of 'int' data type is : %zu bytes\n", sizeof(integerType));
  printf("The Size of 'float' data type is : %zu bytes\n", sizeof(floatType));
  printf("The Size of 'double' data type is : %zu bytes\n", sizeof(doubleType));
  printf("The Size of 'char' data type is : %zu byte\n", sizeof(characterType));

  return 0;
}
