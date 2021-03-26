#include <stdio.h>
#include <string.h>

char input[100];
void ascendingOrderString() {
  int i, j;
  char temp;
  int stringLength = strlen(input);
  for (i = 0; i < stringLength - 1; i++) {
    for (j = i + 1; j < stringLength; j++) {
      if (input[i] > input[j]) {
        temp = input[i];
        input[i] = input[j];
        input[j] = temp;
      }
    }
  }
}

int main() {
  printf("\n\t Enter the string : ");
  fgets(input, 100, stdin);
  ascendingOrderString();
  puts(input);
  return 0;
}