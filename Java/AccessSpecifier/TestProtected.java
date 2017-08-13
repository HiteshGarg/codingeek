class Demo {
	protected int a=5; //giving variable a protected access
}

/*a subclass of the class Demo where a is declared*/
class ProtectedDemo extends Demo {
	protected void display() {
		System.out.println("The value of a is : "+a); //variable a is easily accessible inside the subclass
	}
}

/*Creating another class within the same package*/
public class TestProtected {
	
	public static void main(String args[]) {
		
		final ProtectedDemo ob = new ProtectedDemo();
		ob.display(); //calling a protected method inside another class within the same package
	}
}
