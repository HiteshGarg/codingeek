/*
 *This program shows call by value in Java. It calculates the sum of two numbers.
 */

import java.util.Scanner;

class CallByValue {

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        int x, y;
        System.out.println("Enter two numbers : ");
        x = in.nextInt();
        y = in.nextInt();

        CallByValue ob = new CallByValue();
        //sending the values to the method sum and printing the sum that is returned. This is the actual parameter.
        System.out.println("The sum is : " + ob.sum(x, y));
    }

    /**
     * The method sum receives two values from the main method and returns their sum
     */
    public int sum(int a, int b) {//this is the formal parameter
        int s = a + b;
        return s; //return statement
    }
}
