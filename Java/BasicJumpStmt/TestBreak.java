/*This program shows the use of break in a nested for loop. This program prints a simple pattern*/

public class TestBreak {
	public static void main(String args[]) {
		int i,j;
		for(i=1;i<=5;i++) { //outer loop
			for(j=1;j<=5;j++) { //inner loop
				if(j<=i)
					System.out.print(i+" ");
				else 
					break;//break terminates the inner loop as it is present inside the inner loop block. 
			}
			System.out.println();
		}
	}
}
