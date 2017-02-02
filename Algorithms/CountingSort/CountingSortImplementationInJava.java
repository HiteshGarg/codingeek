/* Java implementation Counting Sort */
package codingeek;
import java.util.Arrays;
import java.util.Scanner;

public class CountSort {
    /*  Counting sort function  */
    void countingSort(int A[] , int max){
        int n= A.length ;
        int B[]=new int[n];
        int C[]=new int[max+1];

        //Initializing counting array C[] to 0
        for (int i=0; i <=max; i++)
            C[i] = 0;
        //Storing count of each element in array C
        for (int j=0; j<n; j++)
            C[A[j]] = C[A[j]] + 1;

        /* Change C[i] such that it contains actual
        position of these elements in output array*/
        for (int i=1; i<max+1; i++)
            C[i] = C[i] + C[i-1];

        //Creating Output array from C[i]
        //and decrementing value of C[i].
        for (int j=n-1; j>=0; j--)
        {
            B[C[A[j]]-1] = A[j];
            C[A[j]] = C[A[j]] - 1;
        }

        //Printing sorted array
        System.out.println("The Sorted array is : ");
        //print sorted array
          System.out.println(Arrays.toString(B));
    }
		
    public static void main (String args[]){
        @SuppressWarnings("resource")
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of input : ");
        
        int n= sc.nextInt();
        int A[] =new int[n];
        int max=0;
        
        System.out.println("Enter the elements to be sorted :");
        
        /*Storing element in a array.
         And finding max of elements to set range
         of counting array C[]*/
        for(int i=0; i<n; i++){
            A[i]=sc.nextInt();
            if (A[i] > max) {
                max= A[i];
            }
        }

        CountSort ob= new CountSort();
        //calling counting-sort function
        ob.countingSort(A, max);

    }
}
