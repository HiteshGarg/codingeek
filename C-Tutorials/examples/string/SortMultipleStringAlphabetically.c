#include <stdio.h>
#include <string.h>

char str[25][25];
int count;
void sortStringsInAplhabeticalAsecOrder() {

  for (int i = 0; i <= count; i++) {
    gets(str[i]);
  }

  for (int i = 0; i <= count; i++) {
    for (int j = i + 1; j <= count; j++) {
      if (strcmp(str[i], str[j]) < 0) {
        char temp[25];
        strcpy(temp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], temp);
      }
    }
  }
}
int main() {
  puts("Enter the number of strings: ");
  scanf("%d", &count);
  puts("Enter Strings(followed by enter): ");

  sortStringsInAplhabeticalAsecOrder();

  printf("Sorted Strings:");

  for (int i = 0; i <= count; i++) {
    puts(str[i]);
  }
  return 0;
}