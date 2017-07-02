class Demo3 {
	int a=5,b=10;//no access specifier given to variable a and b. They fall under the default access specifier.
}

/*Creating a subclass of class Demo3*/
class DefaultDemo extends Demo3 {
	void display() {
		System.out.println("The value of a is : "+a); //variable a is easily accessible inside a subclass
	}
}
  
/*Creating another class within the same package*/
public class TestDefault {
	public static void main(String args[]) {
		DefaultDemo ob=new DefaultDemo();
		ob.display();
		System.out.println("The value of b is : "+ob.b);//accessing variable b inside another class within same package.
	}
}
