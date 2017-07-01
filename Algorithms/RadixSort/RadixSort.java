/* Java implementation Radix Sort */
package codingeek;
import java.util.Arrays;
import java.util.Scanner;

public class RadixSort {
	
	public static void main(String arg[]){
		
		int a[] = {209,3,48,91,66,101,30,795};
		//print unsorted array using Arrays.toString()
	    System.out.print("Unsorted array: ");
        System.out.println(Arrays.toString(a)); 
		
		RadixSort rs= new RadixSort();
	    rs.radixSort(a);
	
	    System.out.print("Sorted array: ");
        //print sorted array
        System.out.println(Arrays.toString(a)); 
	    
	}
	
	// This  function gives maximum value in array[]
	public int getMax(int A[])
	{
	    int max = A[0];
	    for (int i = 1; i < A.length; i++){
	        if (A[i] > max)
	            max = A[i];
	    }
	    return max;
	}
	
	// Main Radix Sort sort function
	public void radixSort(int A[])
	{
	    int digitPlace = 1;
	    int n=A.length;
	    int result[]=new int[n]; // resulting array
	    // Find the largest number to know number of digits
	    int largestNum = getMax(A);
	
	
	    //we run loop until we reach the largest digit place
	    while(largestNum/digitPlace >0){
	    	
	        int count[]=new int[10];
	        //Initializing counting array C[] to 0
		    for (int i=0; i <10; i++)
		        count[i] = 0;
		        
	         //Store the count of "keys" or digits in count[]
	        for (int i = 0; i < n; i++)
	            count[ (A[i]/digitPlace)%10 ]++;
	
	        // Change count[i] so that count[i] now contains actual
	        //  position of this digit in result[]
	        //  Working similar to the counting sort algorithm
	        for (int i = 1; i < 10; i++)
	            count[i] += count[i - 1];
	
	        // Build the resulting array
	        for (int i = n - 1; i >= 0; i--)
	        {
	            result[count[ (A[i]/digitPlace)%10 ] - 1] = A[i];
	            count[ (A[i]/digitPlace)%10 ]--;
	        }
	
	        // Now main array A[] contains sorted
	        // numbers according to current digit place
	        for (int i = 0; i < n; i++)
	            A[i] = result[i];
	
	            // Move to next digit place
	            digitPlace *= 10;
	    }
	}

}
