//find out the ASCII value of a character
#include <stdio.h>
int main() {
  char ch;
  
  printf("Enter the character to get the ASCII value: ");
  scanf("%c", &ch);
  
  int ascii = ch;
  printf("ASCII value of %c = %d", ch, ascii);
  return 0;
}