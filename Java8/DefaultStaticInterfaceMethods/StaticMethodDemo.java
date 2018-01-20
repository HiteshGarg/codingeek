/**
 *This program shows the use of a static method in an interface
 *The following interface I1 contains an abstract method and a static method.
 */
 
package com.codingeek.java.DefaultStaticInterfaceMethods;

public interface I1 {

    //a traditional abstract method declaration inside an interface
    void printNum(int n);
    
    //a static method inside the interface
    static void printString() {
        System.out.println("Inside the static method.");
    }
}

/**
 * This class provides implementation for the abstract method of the interface I1.
 */

public class StaticMethodExample implements I1 {
    
    //providing an implementation for the abstract method printNum().
    //implementation for printString() need not be provided.
    public void printNum(int n) {
        System.out.println("The number is:" + n);
    }
}

//calling both the static and the abstract method.
public class StaticMethodDemo {
    
    public static void main(String args[]) {
        StaticMethodExample ob = new StaticMethodExample();
        
        //Use the object created to call the method printNum()
        ob.printNum(10);
        
        //for a static method we can directly call the method without the creation of an instance.
        I1.printString();
    }
}
