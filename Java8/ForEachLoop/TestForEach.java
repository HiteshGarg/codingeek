/*Program to print the average of 10 numbers stored in an array using the for-each loop*/

public class TestForEach {
	public static void main(String args[]) {
		int num[]={3,6,1,4,9,7,4,6,2,8},sum=0;
		/*the for-each loop: integer type data with n as the iteration variable used to access the array num[]*/
		for(int n:num) {
			sum=sum+n;//we simply write n as n stores the current array element that is being accessed
		}
		System.out.println("The average of the numbers in the array is : "+(sum/10));
	}
}
