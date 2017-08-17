package com.codingeek.java.InnerClass;

/**
 *This program shows a simple inner class that is declared inside a class
 * and has access to all of the member variables of the outer class.
 */
 class OuterClass {
	 int age = 45;
	 String name = "Ram";
	 
	 /**
	  *This is a simple inner class which prints the name and age.
	  */
	 class InnerClass {
		  void display() {
			 System.out.println("Inside inner class");
			 System.out.println(name + " is " + age + " years old.");
		 }
	 }
	 
	 //Calling the inner class inside the outer class. The inner class is not accessible elsewhere.
	 void callInner() {
		 InnerClass obj = new InnerClass();
		 obj.display();
	 }
 }
 public class InnerClassDemo {
	 
	 public static void main(String args[]) {
		 OuterClass ob;
		 ob = new OuterClass();
		 
		 //calling the callInner() function which calls the inner class inside the body of the outer class
		 ob.callInner();
	 }
 }
