/**
 * This program shows the use of method-overloading.
 */

package com.codingeek.java.Methods;

public class MethodOverloading {
    /*
     *The following method takes a char and an integer value from the main() method.
     */
    void display(char a, int b) {

        System.out.println("The values are : " + a + " , " + b);
    }

    /*
     *The following method takes an integer value from the main() method.
     */
    void display(int a) {

        System.out.println("The value is : " + a);
    }

    /*
     *The following method takes a double value from the main() method.
     */
    void display(double a) {

        System.out.println("The value is : " + a);
    }

    /*
     *The following method takes a char value from the main() method.
     */
    void display(char a) {

        System.out.println("The value is : " + a);
    }

    public static void main(String[] args) {

        MethodOverloading ob = new MethodOverloading();

        //calling the same methods with different parameters.
        ob.display(5);
        ob.display('B');
        ob.display(56.9);
        ob.display('C', 45);
    }
}
