/*
 *This program shows the creation of static nested class. 
 */
class StaticDemo {

    public static void main(String args[]) {
        //object to access the static nested class
        NestedClass ob = new NestedClass();
        //calls the method inside the static nested class
        ob.meth();
    }

    //creation of a static nested class
    static class NestedClass {
        void meth() {
            System.out.println("Inside static Inner class");

        }
    }
}
