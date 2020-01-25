/**
 * This program shows how to use the lambda expression. 
 * It defines a functional interface called InterfaceDemo with the function getValue().
 * This function returns an integer value.
 */
package com.codingeek.Java8.lambdaExpressions;

//The Functional Interface
public interface InterfaceDemo {
  int getValue();
}

public class LambdaDemo {
  public static void main(String args[]) {
    
    InterfaceDemo interDemo; //instance of the functional interface
    
    //In this example we r simply returning a fixed value for the getValue function. 
    //Note that the getValue method does not have any parameters.
    interDemo = () -> 456;
    System.out.println("A constant integer: " + interDemo.getValue());
    
    //Note that the target type should be compatible to the one defined in the functional interface.
    //The example given below will produce an error because of the incompatible data types.
    //The return type of the function is int where here we are returning a String.
    //interDemo = () -> "Codingeek";
    
    //In this case the function would not accept the double value which is returned by the Math.random() function.
    //So we explicitly covert the value to int.
    interDemo = () -> (int) Math.floor(Math.random() * 100);
    System.out.println("A Random Integer: " + interDemo.getValue());
  }
}
