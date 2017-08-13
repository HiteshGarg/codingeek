/*
 *This program shows call by reference in Java. It calculates the square of a number.
 */

import java.util.Scanner;

class CallByRef {

    /*The method Square receives an integer object from the main method and returns the square of the value it contains*/
    public static int square(Integer a) { //this is the formal parameter
        return a * a; //return statement
    }

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        int x;
        System.out.print("Enter a number : ");
        x = in.nextInt();

        Integer intOb = new Integer(x);
        //sending the object to the method square and printing the value that is returned.
        // This is the actual parameter.
        System.out.println("The square is : " + square(intOb));
    }
}
