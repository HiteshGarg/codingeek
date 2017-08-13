/* This program shows the use of labelled break statement. */

public class TestBreakLabel {

    public static void main(String args[]) {
        int i, j;
        boolean t = true;

        outer:
        for (i = 0; i < 5; i++) {
            System.out.println("Inside first loop");

            for (j = 0; j < 5; j++) {
                System.out.println("Inside second loop");
                if (t) {
                    break outer;
                }
            }

            System.out.println("This won't get printed");
        } //the outer block ends here.

        System.out.println("After break");
    }
}
