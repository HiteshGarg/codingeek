#include <stdio.h>
#include <string.h> //taking string.h header file which defines most of the library functions.
int main() {
  char name[50], name1[50], name2[50], ch = 'B'; // declaring strings
  char *x;                                       // pointer
  printf("Enter 1st string:  ");
  gets(name); // input 1st string

  printf("Enter 2nd string:  ");
  gets(name1); // input second string

  printf("strlen() function: %d\n",
         strlen(name)); // prints the length of the name[] string

  printf("strcat() function: %s\n",
         strcat(name, name1)); // concatenates the two strings and stores the
                               // result in name[]

  strcpy(name2, name); // copying the string in name[] to name2[]
  printf("strcpy() function: %s\n", name2); // display the copied string

  printf("strcmp() function: %d\n",
         strcmp(name, name1)); // compare the two strings

  printf("strlwr() function: %s\n",
         strlwr(name)); // convert the string to lowercase

  printf("strupr() function: %s\n",
         strupr(name)); // convert the string to uppercase

  x = strchr(name, ch); // store the pointer of the character in the variable
  printf("strchr()function. The string after ch is: %s\n",
         x); // display the rest of the string

  x = strstr(name, name1); // stores the pointer of the string in the variable
  printf("strstr() function: %s", x); // displays the rest of the string.
  return 0;
}
