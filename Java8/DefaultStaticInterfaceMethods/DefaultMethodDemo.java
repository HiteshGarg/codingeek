/**
 *This program shows the use of a default method in an interface
 *The following interface I1 contains an abstract method and a default method.
 */
 
package com.codingeek.java8.DefaultStaticInterfaceMethods;

public interface I1 {

    //a traditional abstract method declaration inside an interface
    void printNum(int n);
    
    //a default method inside the interface
    default void printString() {
        System.out.println("Inside the default method.");
    }
}

/**
 * This class provides implementation for the abstract method of the interface I1.
 */

public class DefaultMethodExample implements I1 {
    
    //providing an implementation for the abstract method printNum().
    //implementation for printString() need not be provided.
    public void printNum(int n) {
        System.out.println("The number is:" + n);
    }
}

//calling both the default and the abstract method.
public class DefaultMethodDemo {
    
    public static void main(String args[]) {
        DefaultMethodExample ob = new DefaultMethodExample();
        
        //Use the object created to call the method printNum()
        ob.printNum(10);
        
        //Use the object to call the method printString()
        ob.printString();
    }
}
