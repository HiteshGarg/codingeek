package codingeek;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

public class ArrayToListConversion {

  //Arrays.asList()
  public static void main(String[] args) {
     final String arr[] = new String[] { "C", "O", "D", "I","N", "G", "E", "E", "K" };

     // convert array to list - FIXED SIZE IMMUTABLE LIST
     final List<String> list = Arrays.asList(sArray);
     System.out.println("Immutable list - " + list);

     // convert array to list - Non immutable list, can add and perform other operations
     final List<String> list2 = new ArrayList<>(Arrays.asList(sArray));
     System.out.println("Non Immutable list - " + list2);

  }

}
