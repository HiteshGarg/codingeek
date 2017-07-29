/*The following program shows autoboxing and auto-unboxing in methods. This program takes a number and displays its reverse*/

import java.util.Scanner;
public class AutoboxMethodDemo {
	static int rev(Integer iOb) {
		int d , r = 0;
		
		//Auto-unboxing occurs when the object is being operated on.
		while(iOb!=0) {
			d = iOb % 10;
			r = r * 10 + d;
			iOb = iOb / 10;
		}
		return r;
	}
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter a number : ");
		int i = in.nextInt();
		
		/*The int type i is being autoboxed into Integer. Also the returned value is again autoboxed into integer*/
		Integer iOb = rev(i);
		System.out.println("The reverse of the number is : " + iOb);
	}
}
