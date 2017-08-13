/*
 *This program shows return type and the function of the void keyword. It calculates the square of a number and displays it.
 */

import java.util.Scanner;

class ReturnType {

    /*the main function also has the return type as void here so it does not return any value*/
    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        int x;
        System.out.print("Enter a number : ");
        x = in.nextInt();

        ReturnType ob = new ReturnType();
        //calling function display() which in turn calls square() and uses the value returned by square() as parameter.
        ob.display(ob.square(x));
    }

    /*this function has the return type as int and returns an integer value*/
    int square(int a) {
        return a * a;
    }

    /*this function has the return type as void so it does not return any value*/
    void display(int b) {
        System.out.println("The square of the number is : " + b);
    }
}
