/**
 * This program shows call by reference(nah - call by value) in Java.
 * It calculates the square of a number.
 */

import java.util.Scanner;

class CallByValue2 {

    /**
     * The method Square receives an integer object from the main method
     * and returns the square of the value it contains
     */
    public static int square(Integer a) { //this is the formal parameter
        return a * a; //return statement
    }

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        int x;
        System.out.print("Enter a number : ");
        x = in.nextInt();

        Integer intOb = new Integer(x);
        //sending the object's reference contained address to the method square where "a"
        // will be a new variable pointing to the same Integer object
        // and printing the value that is returned.
        // This is the actual parameter.
        System.out.println("The square is : " + square(intOb));
    }
}
