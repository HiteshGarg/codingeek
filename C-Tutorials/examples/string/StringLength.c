#include <stdio.h>
int main() {
  char input[100];
  int i, length = 0;

  printf("Enter a string \n");
  // gets(input);
  fgets(input, 100, stdin);

  for (i = 0; input[i] != '\0' && input[i] != '\n'; i++) {
    length++;
  }
  printf("Length of the string: %d", length);

  return 0;
}