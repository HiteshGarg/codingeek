/**
 * Generating Random integers using the Math.random() function.
 * It is inside the package java.lang
 */
package com.codingeek.java.RandomNumbers;

public class MathRandom {
    
    public static void main(String args[]) {
        
        //generating a random double integer. The range is 0 to 1.
        double x = Math.random();
        
        //generating a random integer from 1 to 100. Replace 100 by 101 to generate random from 0 to 100.
        int y = (int) Math.floor(Math.random() * 100);
        
        double sum = x + y;
        
        System.out.println("Double no. :" + x);
        System.out.println("Integer no. :" + y);
        System.out.println("The sum is: " + sum);
    }

}
