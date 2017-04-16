#include <stdio.h>
int main()
{
    int a=5,*x;//declaring the pointer for integer variable
    char b='z',*y;//declaring the pointer for char variable
    x=&a;//storing the memory location of variable a in pointer variable x
    /*The corresponding values of the addition and subtraction operations on pointer variable x are given below*/
    printf("x= %d\n",x);//printing the actual value of x
    printf("x+3= %d\n",x+3);//the value incremented by 3
    printf("x-2= %d\n",x-2);//the value decremented by 2
    y=&b;//storing the memory location of variable b in pointer variable y
    /*The corresponding values of the addition and subtraction operations on pointer variable y are given below*/
    printf("y= %d\n",y);//printing the actual value of y
    printf("y+3= %d\n",y+3);//the value incremented by 3
    printf("y-2= %d\n",y-2);//the value decremented by 2
    return 0;
}
