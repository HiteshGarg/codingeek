package switchblockandexpression;

public class SwitchExpressionWithYieldAndTraditionalStyleExample {

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
      case JANUARY:
      case FEBRUARY:
        yield "Wow"; // See with "yield" we do not need the break statement
      case MARCH:
        yield "Favourite month";
      default:
        yield "Whatever.. I dont care.";
    };
  }

  private enum Month {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL
  }
}
