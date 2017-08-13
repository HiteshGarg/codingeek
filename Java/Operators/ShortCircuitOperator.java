package com.codingeek.java.operators;

/*
 *The following program shows the use of the secondary Logical AND and OR(Short-circuit operators)
 */
public class ShortCircuitOperator {
	 
	 public static void main(String args[]) {
		 int a = 3, b = 5, c = 0;
		 
		 //the || operator only checks the left hand side, so the value of b remains unchanged
		 if(a != 0 || b++ > 0) {
			 System.out.println("(a != 0 || b++ > 0) is true and value of b is : " + b);
		 } else {
			 System.out.println("(a != 0 || b++ > 0) is false");
		 }
		 
		 System.out.println();
		 
		 //the | operator checks both the operands and increments the value of b
		 if(a != 0 | b++ > 0) {
			 System.out.println("(a != 0 | b++ > 0) is true and value of b is : " + b);
		 } else {
			 System.out.println("(a != 0 | b++ > 0) is false");
		 }
		 
		 System.out.println();
		 
		 //The && operator only checks the left hand side thus it does not reveal any exceptions
		 if(a != 3 && (a / c) > 5) {
			 System.out.println("(a != 3 && (a / c) > 5) is true");
		 } else {
			 System.out.println("(a != 3 && (a / c) > 5) is false");
		 }
		 System.out.println();
		 
		 //the & operator checks both the operands and it reveals exception in the thread
		 if(a != 3 & (a / c) > 5) {
			 System.out.println("(a != 3 & (a / c) > 5) is true");
		 } else {
			 System.out.println("(a != 3 & (a / c) > 5) is false"); 
		 }
	}
 }
