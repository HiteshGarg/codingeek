/*This program shows the use of Integer and Long wrapper classes and some of its functions*/

public class IntLongDemo {
	public static void main(String args[]) {
		Integer i1 = new Integer(100);//Wrapping the int value 100 into the object i1
		Integer i2 = new Integer(15);//Wrapping the int value 15 into the object i2
		Long l = new Long(4567);//l is assigned the long value 4567
		
		/*Some of the methods are shown below*/
		System.out.println("Sum of "  + i1 + " and " + i2 + " is : " +Integer.sum(i1,i2));
		System.out.println("The maximum of the two Integer objects is : " + Integer.max(i1,i2));
		System.out.println("The octal of the number " + l + " is : " + Long.toOctalString(l));
	}
}
