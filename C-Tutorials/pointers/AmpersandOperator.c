#include <stdio.h>
int main()
{
    int a=5; //assigning value to an integer variable
    printf("The address of %d is: %u",a,&a);//&a returns the address of the variable a
    return 0;
}
