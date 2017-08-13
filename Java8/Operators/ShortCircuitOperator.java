/*
 *The following program shows the use of the secondary Logical AND and OR(Short-circuit operators)
 */

 package com.codingeek.java.operators;
 public class ShortCircuitOperator {
	 
	 public static void main(String args[]) {
		 int a = 3, b = 5, c = 0;
		 
		 if(a != 0 || b++ > 0)			//the || operator only checks the left hand side, so the value of b remains unchanged
			 System.out.println("(a != 0 || b++ > 0) is true and value of b is : " + b);
		 else
			 System.out.println("(a != 0 || b++ > 0) is false");
		 
		 System.out.println();
		 
		 if(a != 0 | b++ > 0)			//the | operator checks both the operands and increments the value of b
			 System.out.println("(a != 0 | b++ > 0) is true and value of b is : " + b);
		 else
			 System.out.println("(a != 0 | b++ > 0) is false");
		 		 
		 System.out.println();
		 
		 if(a != 3 && (a / c) > 5)		//The && operator only checks the left hand side thus it does not reveal any exceptions
			 System.out.println("(a != 3 && (a / c) > 5) is true");
		 else
			 System.out.println("(a != 3 && (a / c) > 5) is false");
		 
		 System.out.println();
		 
		 if(a != 3 & (a / c) > 5)		//the & operator checks both the operands and it reveals exception in the thread
			 System.out.println("(a != 3 & (a / c) > 5) is true");
		 else
			 System.out.println("(a != 3 & (a / c) > 5) is false"); 
	 }
 }
