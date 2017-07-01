#include <stdio.h>
int main()
{
    char name[50];//declaring a string
    printf("Enter a string : ");
    gets(name);//using function to take string input
    printf("The string is : ");
    puts(name);//prints the string that has been entered by the user
    return 0;
}
