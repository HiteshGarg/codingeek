#include <stdio.h>
int factorial(int x)//function definition
{
    if(x==1||x==0)
        return 1;
    else
        return (x*factorial(x-1));//function being called within its own body
}
int main()
{
    int n,i,f=1;
    printf("Enter the range: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=factorial(i);//function call at the initial stages
        printf("The factorial of %d is: %d \n",i,f);
    }
    return 0;
}
