class Demo {
	public int a=5; //giving the variable a public access
	
	/*the method show also has public access*/
	public void show() {
		System.out.println("Inside class Demo");
	}
}

/*Creating another class inside same package to access the members of Demo class*/
public class PublicDemo {

	public static void main(String args[]) {
		Demo ob = new Demo();
		ob.show(); //calling the show() method inside another class within same package
		
		System.out.println("The value of a is : "+ob.a);//The variable a is accessed inside another class within same package
	}
}
		
		
