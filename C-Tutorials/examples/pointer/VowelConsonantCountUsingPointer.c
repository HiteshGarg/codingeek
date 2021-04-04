#include <stdio.h>

char str1[100];
char *ptr;

void printString() {
  while (*ptr != '\0')
    printf("%c", *ptr++);
}

int main() {
  printf("Enter any string: ");

  fgets(str1, 100, stdin);
  ptr = str1;

  printf("The input string is: ");
  printString();
  return 0;
}