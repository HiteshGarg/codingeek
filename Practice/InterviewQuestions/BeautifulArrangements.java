package codingeek;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class BeautifulArrangement {

    static int count;

    public static void main(String... args) {
        System.out.println("Print numbers");
        final Scanner sc = new Scanner(System.in);
        final int number = sc.nextInt();
        final List<Integer> availableNumbers = new ArrayList<>();
        for (int i = 1; i <= number; i++) {
            availableNumbers.add(i);
        }
        if (number >= 1) {
            findArrangement(1, availableNumbers, number);
            System.out.println("Possible -" + count);
        } else {
            System.out.println("Possible " + 0);
        }
    }

    public static void findArrangement(final int index, final List<Integer> availableNumbers, final int number) {
        for (int i = 0; i < availableNumbers.size(); i++) {
            if (availableNumbers.get(i) % index == 0 || index % availableNumbers.get(i) == 0) {

            	final List<Integer> remainingNumbers = new ArrayList<>();
                remainingNumbers.addAll(availableNumbers);
                remainingNumbers.remove(availableNumbers.get(i));
                if (index < number) {
                    findArrangement(index + 1, remainingNumbers, number);
                } else {
                    count++;
                }
            }
        }
    }
}
