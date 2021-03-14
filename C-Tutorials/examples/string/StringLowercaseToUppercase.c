#include <stdio.h>
#include <string.h>

char string[1000];

void convertLowerToUpper() {
  int i;
  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] >= 'a' && string[i] <= 'z') {
      string[i] = string[i] - 32;
    }
  }
}
int main() {
  printf("\nEnter the string : ");
  gets(string);
  convertLowerToUpper();
  printf("\nThe String in Upper Case = %s", string);
  return 0;
}
