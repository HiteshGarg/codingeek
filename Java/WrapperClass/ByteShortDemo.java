/*This program creates one Byte object and one Short object. It displays the use of the function doubleValue() and reverseBytes() */

public class ByteShortDemo {
	public static void main(String args[]) {
		Byte b = new Byte("100"); //Wrapping the byte number into Byte Object.
		Short s = new Short("16"); //Wrapping the short number into Short Object.
		
		/*Displaying the values as well as the double form of b and the reversed byte of s*/
		System.out.println("The double value of " + b + " is " + b.doubleValue()); 
		System.out.println("Reversed byte of " + s + " is " + Short.reverseBytes(s));
	}
}
