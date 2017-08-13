/*
 *This program shows the creation of static nested class. 
 */
class StaticDemo {

    public static void main(String args[]) {
        NestedClass ob = new NestedClass();    //object to access the static nested class
        ob.meth();                                //calls the method inside the static nested class
    }

    static class NestedClass {                    //creation of a static nested class

        void meth() {
            System.out.println("Inside static Inner class");

        }
    }
}
