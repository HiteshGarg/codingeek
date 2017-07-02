class Demo2 {
	private int a=5;//declaring variable a as a private member of class Demo2
}

/*Creating a subclass of the class Demo2*/
class PrivateDemo extends Demo2 {
	void display() {
		System.out.println("The value of a is : "+a);//accessing variable a inside a subclass. This line will show an error message.
	}
}

/*Creating another class within the same package*/
public class TestPrivate {
	public static void main(String args[]) {
		PrivateDemo ob=new PrivateDemo();
		ob.display();
		Demo2 obj=new Demo2();
		System.out.println("The value of a is : "+obj.a);//accessing variable a inside another class of the same package. This line will show an error message.
	}
}
