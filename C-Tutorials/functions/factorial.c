#include <stdio.h>
long fact(int);//function declaration
int main()
{
    int i,n;
    long f;
    printf("Enter the range:\n");
    scanf("%d",&n);
    //each number is sent to the function fact() and it returns the factorial of the number
    for(i=1;i<=n;i++){
        //we are using call by value
       f=fact(i);//actual parameter
       printf("the factorial of %d is: %d\n",i,f);//prints the factorial of each number
    }
    return 0;
}
long fact(int x)//function definition with formal parameter
{
    int i;
    long f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;//calculates factorial of the number
    }
    return f;
}
