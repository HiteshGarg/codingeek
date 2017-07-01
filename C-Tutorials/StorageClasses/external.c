#include<stdio.h>

int a=3;
void func()
{
    extern int b;
    printf("%d  %d\n",a,b);
}

int b=5;
void main()
{
    printf("%d \n",a);
    func();
}

