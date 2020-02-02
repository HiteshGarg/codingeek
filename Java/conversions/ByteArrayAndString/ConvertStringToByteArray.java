import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.Base64;

public class ConvertStringToByteArray {
  public static void main(String[] args) {
    // var is the feature of Java 10
    var validString = "Codingeek.com";

    // Using getBytes method
    byte[] usingGetBytes = validString.getBytes(StandardCharsets.UTF_8);

    // USing Base64 Decoder
    // First encode a String to Base64 format
    var base64EncodedString = Base64.getEncoder().encodeToString(validString.getBytes());
    byte[] usingBase64Encoder = Base64.getDecoder().decode(base64EncodedString);

    System.out.println(
        "Are both arrays equal -> " + Arrays.equals(usingGetBytes, usingBase64Encoder));
  }
}
