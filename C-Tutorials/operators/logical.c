#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=16,b=5,c=0,d;
    d= a&&c;
    printf("a&&c results in: %d\n",d);
    d=a&&b;
    printf("a&&b results in: %d\n",d);
    d=a||c;
    printf("a||c results in: %d\n",d);
    d=!b;
    printf("!b results in: %d\n",d);
    return 0;
}
