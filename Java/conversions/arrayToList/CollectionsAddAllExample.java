package codingeek;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

public class ArrayToListConversion {

      //Collections.addAll()
   public static void main(String[] args) {
       final String arr[] = new String[] { "G", "E", "E", "K" };
       final List<String> initialList = new ArrayList<String>() {{
           add("C");
           add("O");
           add("D");
           add("I");
           add("N");
       }};

       // Elements of the array are appended at the end
       Collections.addAll(initialList, arr);
       System.out.println(initialList);
   }

}
