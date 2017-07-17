/*The following program shows the use of objects as condition to an if statement*/

public class AutoboxIfDemo {
	public static void main(String args[]) {
		Boolean bOb = true; //creating Boolean object with value true
		
		 /*If statement auto-unboxes the Boolean object bOb to extract the value true and take it as a condition*/
		if(bOb) 
			System.out.println("bOb contains True");
		else
			System.out.println("bOb contains False");
	}
}
