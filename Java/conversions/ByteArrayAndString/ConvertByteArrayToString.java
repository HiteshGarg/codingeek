import java.util.Base64;

public class ConvertByteArrayToString {
  public static void main(String[] args) {
    // var is the feature of Java 10
    var validString = "Codingeek.com";

    // Using new String(byte[] )
    var byteArray = validString.getBytes();
    System.out.println("Using String constructor -> " + new String(byteArray));

    // When the string is base64 encoded
    var base64EncodedString = Base64.getEncoder().encodeToString(byteArray);
    var base64DecodedByteArray = Base64.getDecoder().decode(base64EncodedString);

    System.out.println("\nBase64 encoded string -> " + base64EncodedString);
    System.out.println("Using with base -> " + new String(base64DecodedByteArray));
  }
}
