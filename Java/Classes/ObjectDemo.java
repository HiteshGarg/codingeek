/**
 * This program shows the creation of a class, its methods and objects.
 */
class ClassDemo {
    //instance variables
    int a = 5, b = 6, c;

    /**
     * A simple method inside the class to calculate sum
     */
    void sum() {
        c = a + b;
        System.out.println("The sum is : " + c);
    }
}

public class ObjectDemo {

    public static void main(String args[]) {
        ClassDemo ob = new ClassDemo();        //object creation using new

        //displaying the members of ClassDemo using object ob
        System.out.println("The value of a is : " + ob.a + " and b is : " + ob.b);
        ob.sum();
    }
}

	
