#include <stdio.h>
void display(int a[2][2]);//declaring a function which takes a two dimensional integer array as an argument
int main()
{
    int num[2][2],i,j;
    printf("Enter 2x2 numbers:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&num[i][j]);
    display(num);//the whole 2D array gets passed to the function display()
    return 0;
}
void display(int a[2][2])//the formal parameter takes a sized array as argument
{
    int i,j;
    printf("The matrix is:\n");//the matrix is displayed using two for loops
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
