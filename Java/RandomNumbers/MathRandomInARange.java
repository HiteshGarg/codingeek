/**
 * Generating random integers using Math.random() in a given range.
 */
package com.codingeek.java.RandomNumbers;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class MathRandomInARange {
    
    /*
     * this function returns the random number in the given range inclusive
     */
    public static int generateRandom(int l,int r) {
        int range = (r - l) + 1;
        return (int)(Math.random() * range) + l;
    }
    
    public static void main(String args[])throws IOException {
        
        //BufferedReader
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        
        //take the min and max range inclusive
        int min = Integer.parseInt(in.readLine());
        int max = Integer.parseInt(in.readLine());
        
        System.out.println("The integer is:" + generateRandom(min,max));
    }

}
