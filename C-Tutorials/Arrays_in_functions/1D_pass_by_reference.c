#include <stdio.h>
void access(int *);
/*declaring an array function. parentheses indicates that we shall be passing the whole array.
 * is the pointing operator that receives the value of the address passed to the function.*/
int main()
{
    int i,x[5];
    printf("Enter 5 numbers in an array: \n");
    for(i=0;i<5;i++)
	scanf("%d",&x[i]);
    access(x);//here we pass the address of the array to the function access
    return 0;
}
void access(int *a)// we receive the value in another array variable with the name 'a'
{
    int i;
    printf("The array elements are as follows:\n");
    for(i=0;i<5;i++)
	printf("%d \n",a[i]);//displays the array elements
}
