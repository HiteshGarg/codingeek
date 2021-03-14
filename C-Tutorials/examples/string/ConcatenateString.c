#include <stdio.h>
char s1[100], s2[100];

void concatenateString() {
  int j;
  int length = 0;
  while (s1[length] != '\0') {
    ++length;
  }
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }
  s1[length] = '\0';
}

int main() {
  printf("\nEnter the first string: ");
  scanf("%s", s1);
  printf("\nEnter the second string: ");
  scanf("%s", s2);
  concatenateString();
  printf("After the concatenation: ");
  puts(s1);
  return 0;
}