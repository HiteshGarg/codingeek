#include <stdio.h>

int main()
{
    int a=5,b=16,c=20;
    if(a>b)
    {
        if(a>c){
         printf("The greater number is : %d",a);
        }
        else{
         printf("The greater number is : %d",c);
        }
    }
    else
    {
      if(b>c)
      	printf("The greater number is : %d",b);
      else
      	printf("The greater number is : %d",c);
    }

    return 0;
}
