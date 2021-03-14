#include <stdio.h>
#include <string.h>

char string[1000];

void convertUpperCaseToLower() {
  int i;
  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] >= 'A' && string[i] <= 'Z') {
      string[i] = string[i] + 32;
    }
  }
}
int main() {
  printf("\nEnter the string : ");
  gets(string);
  convertUpperCaseToLower();
  printf("\nThe String in Lower Case = %s", string);
  return 0;
}
