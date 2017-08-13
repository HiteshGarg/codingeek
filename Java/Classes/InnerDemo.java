/*
 *This program defines a private inner class 
 */
 class Outer {
	 
	 private class Inner {				//declaring a private inner class
		 
		 public void meth() {
			 System.out.println("Inside inner class");	
		 }
	 }
	 
	 public void meth2() {
		 Inner ob = new Inner();		//creating an object to access the inner class
		 ob.meth();
	 }
 }
 public class InnerDemo {
	 
	 public static void main(String args[]) {
		 Outer obj = new Outer();		//creating object to access the outer class 
		 obj.meth2();					      //calling meth2() which in turn calls the inner class
	 }
 }
