package com.codingeek.java.InnerClass;

/**
 * This program shows the use of local inner class.
 * The inner class is declared inside the body of a method.
 */
public class EnclosingClass {
    int a, b;
    int product;

    //constructor to initialize the instance variables.
    EnclosingClass(int x, int y) {
        a = x;
        b = y;
    }

    public static void main(String args[]) {
        EnclosingClass ob = new EnclosingClass(10, 6);

        //calling the method prod() which contains the LocalInner class in its body.
        ob.prod();
    }

    //The method prod() encloses the inner class within its block.
    void prod() {

        //The variable c needs be declared as final for version 7 or older
        int c = 4;

		 /*
		  * Defining a local inner class which displays the product.
		  */
        class LocalInner {

            void calcProd() {
                System.out.println("Inside inner class");

                product = a * b * c;
                System.out.println("The product is : " + product);
            }
        }

        //Instantiating the local inner class. It should be done within the block where it is declared.
        LocalInner obj = new LocalInner();
        obj.calcProd();
    }
}
 
