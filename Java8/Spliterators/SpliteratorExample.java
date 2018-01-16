/**
 * This program creates a Stream to an ArrayList.
 * The Spliterator is split into two and used. 
 * The function of the forEachRemaining() function and tryAdvance() function is shown. 
 */

package com.codingeek.java.Spliterators;

import java.util.*;
import java.util.stream.*;
public class SpliteratorExample {
    
    public static void main(String args[]) {
        
        //creating an ArrayList of Strings
        ArrayList<String> list = new ArrayList<String>();
        list.add("Apple");
        list.add("Mango");
        list.add("Banana");
        list.add("Pear");
        list.add("Grapes");
        
        //Obtain a Stream to the ArrayList
        Stream<String> str = list.stream();
        
        //Obtain a Spliterator
        Spliterator<String> splt1 = str.spliterator();
        
        //split the first spliterator
        Spliterator<String> splt2 = splt1.trySplit();
        
        //If split then display the new Spliterator using forEachRemaining() function
        if(splt2 != null) {
            System.out.println("Spliterator 2 result: ");
            splt2.forEachRemaining((n) -> System.out.println(n));
        }
        
        //Now display the old Spliterator using the tryAdvance() function
        System.out.println("Spliterator 1 result: ");
        while(splt1.tryAdvance((n) -> System.out.println(n)));      
    }
}
