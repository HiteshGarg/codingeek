package codingeek;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.stream.Collectors;

public class ArrayToListConversion {

    //Java 8 Streams
    public static void main(String[] args) {
        final String arr[] = new String[] { "C", "O", "D", "I","N", "G", "E", "E", "K" };
        final List<String> convertedList = Arrays.stream(arr).collect(Collectors.toList());

        System.out.println(convertedList instanceof List);

        //Adding new item successfully - i.e. non immutable list
        convertedList.add("new Item");

        System.out.println(convertedList);

        //Example with int array(primitive).
        final int[] arr2 = {1, 2, 3};
        System.out.println(Arrays.stream(arr2).boxed().collect(Collectors.toList()));
    }
}
