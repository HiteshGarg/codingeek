#include <stdio.h>

void recursion(int n)
{
    if( n<=3 ){ //exit condition for recursive function
        printf("%d\n",n);
        recursion(++n); //calling itself again
    }
    else{
        return ;
    }
}

int main()
{
    int x=1;
    recursion(x);
    return 0;
}
