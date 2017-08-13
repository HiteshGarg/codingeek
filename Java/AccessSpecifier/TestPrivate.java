class Demo {
	private int a=5;//declaring variable a as a private member of class Demo
}

/*Creating a subclass of the class Demo*/
class PrivateDemo extends Demo {
	void display() {
		System.out.println("The value of a is : "+a);//accessing variable a inside a subclass. This line will show an error message.
	}
}

/*Creating another class within the same package*/
public class TestPrivate {
	
	public static void main(String args[]) {
		PrivateDemo ob = new PrivateDemo();
		ob.display();
		
		Demo obj = new Demo();
		System.out.println("The value of a is : "+obj.a);//accessing variable a inside another class of the same package. This line will show an error message.
	}
}
