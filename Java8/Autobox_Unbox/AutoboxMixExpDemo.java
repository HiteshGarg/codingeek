/*The following program shows the use of objects in mixed expressions thus demonstrating Autoboxing and Auto-unboxing*/

public class AutoboxMixExpDemo {
	public static void main(String args[]) {
		Integer iOb = 66; //creating Integer object with value 56
		Double dOb = 30.0; ////creating Double object with value 30.0
		System.out.println("Value of iOb = " + iOb);
		System.out.println("Value of dOb = " + dOb);
		
		/*Operating on Integer and Double objects which are first unboxed to perform the operation and then the value is boxed and stored into dOb*/
		dOb = iOb / dOb;
		System.out.println("Final Value of dOb = " + dOb);
		
	}
}
