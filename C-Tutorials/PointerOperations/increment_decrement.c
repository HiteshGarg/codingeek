#include <stdio.h>
int main()
{
    int a=5,*x;//declaring the pointer for integer variable
    char b='z',*y;//declaring the pointer for char variable
    x=&a;//storing the memory location of variable a in pointer variable x
    /*The corresponding values of the increment and decrement operations on pointer variable x are given below*/
    printf("x= %d\n",x);//printing the actual value of x
    x++;
    printf("x++= %d\n",x);//the value gets incremented by 4 bytes because the size of one int variable is 4 bytes
    x--;
    printf("x--= %d\n",x);//the value gets decremented by 4 bytes and changes back to the original value
    y=&b;//storing the memory location of variable b in pointer variable y
    /*The corresponding values of the increment and decrement operations on pointer variable y are given below*/
    printf("y= %d\n",y);//printing the actual value of y
    y++;
    printf("y++= %d\n",y);//the value gets incremented by 1 byte because the size of one int variable is 4 bytes
    y--;
    printf("y--= %d\n",y);//the value gets decremented by 1 byte and changes back to the original value
    return 0;
}
