/**
 *This program generates random numbers using the java.util.Random class.
 */
package com.codingeek.java.Random;

import java.util.Random;

public class RandomClass {
    public static void main(String args[]) {
        
        //create a Random class object
        Random r = new Random();
        
        //generating random integer in the range 0 to 10.
        int x = r.nextInt(10);
        
        //generating random double number between 0.0 to 1.0
        double y = r.nextDouble();
        
        double sum = x + y;
        
        System.out.println("Double no. :" + y);
        System.out.println("Integer no. :" + x);
        System.out.println("The sum is: " + sum);
        
    }

}
