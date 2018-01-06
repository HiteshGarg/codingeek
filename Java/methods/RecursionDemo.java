/**
  *The following program prints the factorial of a number in the range specified by the user.
  *This program uses recursion.
  */
  
  package com.codingeek.java.Methods;
  import java.util.Scanner;
  
  public class RecursionDemo {
	  
	  /*
	   *This is the recursive method which calculates the factorial of a number.
	   */
	   int calcFactorial(int x) {
		   
		   if(x == 0 || x == 1)
			   return 1;
		   else
			   return x * calcFactorial(x-1); //decreases the value of x for every call
	   }
	   
	   public static void main(String[] args) {
		   
		   Scanner in = new Scanner(System.in);
		   RecursionDemo ob = new RecursionDemo();
		   
		   int a, b;
		   System.out.println("Enter the range :");
		   a = in.nextInt();
		   b = in.nextInt();
		   
		   for(int i = a; i <= b; i++) 
				 //calling the function calcFactorial() to calculate the factorial of the numbers individually 
			   System.out.println("The factorial of " + i + " = " +ob.calcFactorial(i)); 
	   }
  }
