/*This program show the use of literals in different number formats with underscore in between the digits*/

public class UnderscoreDemo {
	public static void main(String args[]) {
		
		long n = 0b1011_1011_1011_1011_1011_1011_1011_10110L;//binary literal
		long n1 = 1234_5678_9012L;//decimal literal
		float num = 33.65_2267F; //decimal literal
		long l = 0X5A_B7_66_EFL; // hex literal
		int o = 052; //octal literal
		
		/*Displaying all the literals*/
		System.out.println("Binary literal value : " + n);
		System.out.println("decimal literal value(no floating point) : " + n1);
		System.out.println("decimal literal value(floating point) : " + num);
		System.out.println("Hexadecimal literal value : " + l);
		System.out.println("Octal literal value : " + o);
	}
}
