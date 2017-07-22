/*This program finds out the maximum of the two numbers using ternary operator*/

import java.util.Scanner;
public class TernaryOperator {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		int a, b, max;
		System.out.println("Enter two numbers : ");
		a = in.nextInt();
		b = in.nextInt();
		
		//The max is evaluated using the ternary operator which shall result in true or false according to the user input. 
		max = (a > b)? a : b;
		System.out.println("The max number is : " + max);
	}
}
		
