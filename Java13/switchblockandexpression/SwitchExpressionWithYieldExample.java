package switchblockandexpression;

public class SwitchExpressionWithYieldExample {

  public static void main(String[] args) {
    System.out.println("Mood for JANUARY -> " + getMonthMood(Month.JANUARY));
    System.out.println("Mood for FEBRUARY -> " + getMonthMood(Month.FEBRUARY));
    System.out.println("Mood for MARCH -> " + getMonthMood(Month.MARCH));
    System.out.println("Mood for APRIL -> " + getMonthMood(Month.APRIL));
  }

  private static String getMonthMood(Month month) {
    // It is not simply a block that executes some code
    // rather it is an expression that can return a value
    return switch (month) {
      case JANUARY, FEBRUARY -> "Wow"; // Witness the pattern matching no need for "breaks"
      case MARCH -> "Favourite month";
      default -> {
        // generally needed when some extra code is to be executed
        yield "Whatever.. I dont care.";
      }
    };
  }

  private enum Month {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL
  }
}
