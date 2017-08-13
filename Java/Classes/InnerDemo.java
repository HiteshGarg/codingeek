/*
 *This program defines a private inner class 
 */
class Outer {

    public void meth2() {
        //creating an object to access the inner class
        Inner ob = new Inner();
        ob.meth();
    }

    //declaring a private inner class
    private class Inner {
        public void meth() {
            System.out.println("Inside inner class");
        }
    }
}

public class InnerDemo {

    public static void main(String args[]) {
        //creating object to access the outer class
        Outer obj = new Outer();
        //calling meth2() which in turn calls the inner class
        obj.meth2();
    }
}
