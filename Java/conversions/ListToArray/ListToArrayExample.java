import java.util.List;

public class ListToArrayExample {
  public static void main(String[] args) {
    // List.of() was introduced in Java 9
    List<String> list = List.of("Harry Potter", "Lord Voldemort", "Hedwig");

    System.out.println("Contents of list ::" + list);

    String[] convertedArray = new String[list.size()];
    list.toArray(convertedArray);

    for (int i = 0; i < convertedArray.length; i++) {
      System.out.println("Element at the index " + i + " is ::" + convertedArray[i]);
    }
  }
}
