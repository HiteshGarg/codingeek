#include <stdio.h>

void checkIfVowelOrConsonant(char ch) {
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' ||
      ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    printf("%c Is a vowel.\n", ch);
  else
    printf("%c Is a consonant.\n", ch);
}
// Using Switch case
// void checkIfVowelOrConsonant(char ch) {
//   switch (ch) {
//   case 'a':
//   case 'A':
//   case 'e':
//   case 'E':
//   case 'i':
//   case 'I':
//   case 'o':
//   case 'O':
//   case 'u':
//   case 'U':
//     printf("%c is a vowel.\n", ch);
//     break;
//   default:
//     printf("%c is a Consonant.\n", ch);
//   }

int main() {
  char ch;
  printf("Enter a character\n");
  scanf("%c", &ch);

  checkIfVowelOrConsonant(ch);
  return 0;
}