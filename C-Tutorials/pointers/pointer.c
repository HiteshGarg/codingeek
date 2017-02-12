#include <stdio.h>

int main()
{
    int a = 5, *b, **c; /* *b used in declaration  of a pointer. It gives the value at the address stored in b. **c is used
    for the declaration of another pointer. It points to the address of variable 'b' */
    
    b = &a;//storing address of 'a' in variable 'b'
    c = &b;//storing address of 'b' in variable 'c'
    
    printf("The value of a is: %d\n", *b);//it prints the value of 'a' stored in the location given by 'b'
    printf("The address of a is :%u\n", &a);//printing address of the variable 'a' in the memory
    printf("The value of b is: %d\n", *c);//prints value stored at 'b'
    printf("The address of b is: %u\n", c);//prints the address of 'b' stored in variable 'c'
    printf("The value of c is: %d\n", &b);//prints the value of 'c' which is the address of variable 'b'
    printf("The address of c is: %u\n", &c);//prints the address of variable 'c'

    return 0;
}
