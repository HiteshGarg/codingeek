#include <stdio.h>
char func(int ascii)
{
    return ((char)ascii);
}
int main()
{
    int ascii;
    char ch;
    printf("Enter any ascii value in decimal: \n");
    scanf("%d",&ascii);
    ch=func(ascii);
    printf("The character is : %c",ch);
    return 0;
}
