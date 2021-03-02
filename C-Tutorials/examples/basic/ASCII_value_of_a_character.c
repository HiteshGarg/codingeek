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
____________________________________________________________________________________________________________________________________________________________________________________

//convert ASCII value to a character
/*
#include <stdio.h>
int main() {
  // change to user input if needed
  char ch = 'A'; 
  int ascii = 65; // Ascii value of 'A'
  char from_ascii = ascii;
  printf("ch to Ascii = %d", ch);
  printf("\nascii to char = %c", ascii);
  printf("\nascii to char variable = %c", from_ascii);
  return 0;
}*/
