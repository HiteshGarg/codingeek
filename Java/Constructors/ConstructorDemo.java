/**
 * This is an example to show the working of constructors in java
 */
package com.codingeek.java.Constructors;

class ConstructorDemo {
    int a, b;
    char c;

    //This is the default Constructor.
    ConstructorDemo() {
        a = 0;
        b = 0;
        c = 'C';
    }

    //This is the parameterized constructor.
    ConstructorDemo(int a, int b, char c) {
        this(c); //call is sent to the other parameterized constructor to initialize c.
        this.a = a;
        this.b = b;
    }

    //another parameterized constructor to initialize c. 
    ConstructorDemo(char c) {
        this.c = c;
    }

    //method that displays all the values
    void display() {
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("c = " + c);
    }

    public static void main(String[] args) {

        //Creating instances for the default constructor as well as the parameterized one.
        ConstructorDemo ob1 = new ConstructorDemo();
        ConstructorDemo ob2 = new ConstructorDemo(4, 5, 'O');

        //calling display method to display the respective values
        ob1.display();
        ob2.display();
    }
}
