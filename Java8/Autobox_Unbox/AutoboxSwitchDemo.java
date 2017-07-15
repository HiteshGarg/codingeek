/*The following program shows the use of objects as condition to a switch statement. It takes the user's choice and displays the days of the week*/

import java.util.Scanner;
public class AutoboxSwitchDemo {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		Integer iOb; //declaring an Integer object
		
		System.out.println("The the serial number of the day you wish to see : ");
		iOb = in.nextInt(); //autoboxing the int value into the Integer object iOb
		
		/*The switch statement automatically unboxes the Integer object iOb and extracts the int value*/
		switch(iOb) {
			case 1:
				System.out.println("Sunday");
			break;
			case 2:
				System.out.println("Monday");
			break;
			case 3:
				System.out.println("Tuesday");
			break;
			case 4:
				System.out.println("Wednesday");
			break;
			case 5:
				System.out.println("Thursday");
			break;
			case 6:
				System.out.println("Friday");
			break;
			case 7:
				System.out.println("Saturday");
			break;
			default:
				System.out.println("Wrong choice");
		}
	}
}
