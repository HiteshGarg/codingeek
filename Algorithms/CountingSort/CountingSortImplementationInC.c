/* C implementation Counting Sort */
#include <stdio.h>

/*  Counting sort function  */
void counting_sort(int A[], int k, int n)
{
    int i, j;
    int B[n], C[k+1];

    //Initializing counting array C[i] to 0
    for (i=0; i<=k; i++)
        C[i] = 0;
    //Store count of each element in array C
    for (j=0; j<n; j++)
        C[A[j]] = C[A[j]] + 1;

    /* Change C[i] such that it contains actual
    position of these elements in output array*/
    for (i=1; i<k+1; i++)
        C[i] = C[i] + C[i-1];

    //Creating Output array from C[i]
    //and decrementing value of C[i].
    for (j=n-1; j>=0; j--)
    {
        B[C[A[j]]-1] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }

    //Printing sorted array
    printf("The Sorted array is : ");
    for (i=0; i<n; i++)
        printf("%d ", B[i]);
}

/*  The main() begins  */
int main()
{
    int n, max = 0,i;
    printf("Enter the number of input : ");
    scanf("%d", &n);
    int A[n];
    printf("\nEnter the elements to be sorted :\n");
    /*Storing element in a array.
     And finding max of elements to set range
     of counting array C[]*/
    for (i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] > max) {
            max= A[i];
        }
    }
    //calling counting-sort function
    counting_sort(A, max, n);
    printf("\n");
    return 0;
}
