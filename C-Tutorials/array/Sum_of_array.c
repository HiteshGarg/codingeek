#include <stdio.h>

int main()
{
    /*a is the initialized array; b is the array that shall have the user input values and c[]
     is the array that shall store the sum of the two arrays a[] and b[]
     */
    int a[5]={6,3,6,5,8},b[5],c[5],i;
    
    printf("enter the elements of the b[] array\n");
    
    for(i=0;i<5;i++){
        //user inputs the numbers in the second array
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        //accesses the data elements of the first two arrays, adds them and stores them in the third array
        c[i]=a[i]+b[i];
    }
    
    printf("the sum of the arrays are:\n");
    for(i=0;i<5;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}
