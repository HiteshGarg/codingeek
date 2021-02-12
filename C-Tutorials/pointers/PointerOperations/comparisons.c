#include <stdio.h>
int main()
{
    int num[10] = {1, 5, 9, 4, 8, 3, 0, 2, 6, 7}, *a, *b, *c;

    //storing the address of num[2] in variable a
    a = &num[2];

    //base address plus 2 stores the address of num[2] in the variable b
    b = (num + 2);

    //storing the address of num[6] in variable b
    c = &num[6];

    //Print values of all the pointers
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    printf("c= %d\n", c);

    //comparing for equality
    if (a == b)
        printf("a and b point to the same location and the value is: %d\n", *a);

    //comparing for inequality
    if (a != c)
        printf("a and c do not point to the same location in the memory");
    return 0;
}
