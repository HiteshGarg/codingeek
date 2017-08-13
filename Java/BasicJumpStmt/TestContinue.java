/*This program shows the use of continue in loops.
It prints the odd numbers in a pattern and skips the even numbers.*/

public class TestContinue {
    public static void main(String args[]) {
        int i, j;

        for (i = 1; i <= 10; i++) {
            if (i % 2 == 0) {
                continue; //skips all the even iterations
            } else {
                for (j = 1; j <= i; j++) {
                    System.out.print(j);
                }
            }
            System.out.println();
        }
    }
}

