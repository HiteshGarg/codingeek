/*This program shows the use of continue with label. It prints a triangular multiplication table from 0 to 9*/

public class TestContinueLabel {
	public static void main(String args[]) {
		int i,j;
		outer:
			for(i=0 ; i<10 ;i++ ) {
				for(j=0 ;j<10 ;j++ ) {
					if(j>i) {
						System.out.println();
						continue outer; //goes back to the outer loop and continues the next iteration
					}
					System.out.print((i*j)+" ");
				}
			}
		System.out.println();
	}
}
