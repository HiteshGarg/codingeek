/**
 *This program shows the use of static methods.
 */
  
  package com.codingeek.java.Methods;
  
  public class StaticMethodDemo {
	  
	 /**
	  * The following method is defined as static so it can be
		* called by the main() method directly since main() method is also declared as static
	  */
	  static void meth() {
		  System.out.println("Inside the static method meth()");
	  }
	  
	  public static void main(String[] args) {
		  meth(); //calling the static method meth()
	  }
  }
