/**
 * Generation of random integers in the given range using java.util.Random class
 */
 package com.codingeek.java.RandomNumbers;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Random;

public class RandomClassInARange {
    
    public static void main(String args[])throws IOException {
        
        //BufferedReader
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        
        //Random class
        Random random = new Random();
        
        int l = Integer.parseInt(in.readLine());
        int r = Integer.parseInt(in.readLine());
        
        //generate random integers
        int range = (r - l) + 1;
        int result = random.nextInt(range) + l;
        
        System.out.println("The random integer is: " + result);
    }
}
