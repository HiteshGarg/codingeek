#include <stdio.h>
int main()
{
    int a=5; //*b used in declaration  of a pointer. It gives the value at the address stored in b.
    printf("The value of a is: %d\n",*(&a));//it prints the same value as a
    printf("The address of a is :%u",&a);//printing address of the variable a in the memory
    return 0;
}
