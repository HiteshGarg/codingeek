class Demo1 {
	protected int a=5; //giving variable a protected access
}

/*a subclass of the class demo1 where a is declared*/
class ProtectedDemo extends Demo1 {
	protected void display() {
	System.out.println("The value of a is : "+a); //variable a is easily accessible inside the subclass
	}
}

/*Creating another class within the same package*/
public class TestProtected {
	public static void main(String args[]) {
		ProtectedDemo ob=new ProtectedDemo();
		ob.display();//calling a protected method inside another class within the same package
	}
}
