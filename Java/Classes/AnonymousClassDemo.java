package com.codingeek.java.InnerClass;

/*
 * This program shows a simple anonymous class
 */
public class AnonymousClassDemo {
    public static void main(String args[]) {

        //the anonymous class is present after the object declaration
        AnonymousClassDemo ob = new AnonymousClassDemo() {

            void meth1() {
                meth2();
            }

            void meth2() {
                System.out.println("Inside Anonymous class");
            }
        };

        //calling meth1() which in turn calls meth2() in its body.
        ob.meth1();
    }

    void meth1() {
    }
}
