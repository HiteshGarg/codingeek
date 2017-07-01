#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5, b=16, c;
    
    c = a & b;
    printf("The Bitwise AND: %d\n", c);
    
    c = a|b;
    printf("The Bitwise OR: %d\n", c);
    
    c = a ^ b;
    printf("The Bitwise Exclusive OR: %d\n", c);
    
    c = ~b;
    printf("The Bitwise Complement: %d\n", c);
    
    c = b >> 2;
    printf("The Bitwise right shift: %d\n", c);
    
    c = a << 3;
    printf("The Bitwise left shift: %d\n", c);
    
    return 0;
}
