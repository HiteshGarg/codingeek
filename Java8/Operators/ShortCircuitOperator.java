/*The following program shows the use of the secondary Logical AND and OR(Short-circuit operators)*/

public class ShortCircuitOperator {
	public static void main(String args[]) {
		int denom = 0, n = 5;
		/*The right part of the if expression will show a arithmetic exception when used with & but in this case it does not 
		because && derives the result by only looking at the left part of the expression*/
		if(denom != 0 && n / denom > 10) {
			System.out.println(n/denom);
		}
		else 
			System.out.println("denom is zero");
	
	/*Demonstration of the working of logical || operator*/
	int a = 9, b = 10;
	if(a > 5 || b++ != 0)
		System.out.println(b);//this statement will print 10 despite the increment operation performed in the if statement.
}
}
