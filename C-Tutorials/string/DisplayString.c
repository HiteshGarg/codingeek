#include <stdio.h>
int main()
{
   char name[20],ch;//declaration of a character array
   int i=0;
   printf("Enter a string:\n");
   //taking string input from the user
   while(ch!='\n')
   {
       ch=getchar();
       name[i]=ch;
       i++;
   }
   name[i]='\0';//ending the string
   i=0;
   //display the string
   printf("The string is:\n");
    while(name[i]!='\0')
   {
       printf("%c",name[i]);
       i++;
   }
    return 0;
}
