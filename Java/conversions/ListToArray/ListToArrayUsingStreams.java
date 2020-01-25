import java.util.List;

public class ListToArrayUsingStreams {
  public static void main(String[] args) {
    List<String> list = List.of("Harry Potter", "Harry Potter 2", "Lord Voldemort", "Hedwig");

    System.out.println("Contents of list ::" + list);

    // filters name which starts from Harry only
    String[] convertedArray = list.stream().filter(name -> name.startsWith("Harry")).toArray(String[]::new);

    for (int i = 0; i < convertedArray.length; i++) {
      System.out.println("Element at the index " + i + " is ::" + convertedArray[i]);
    }
  }
}
