/**
 * Program to print the elements in the array before and after making changes to the iteration variable.
 */
public class ForEachItr {

    public static void main(String args[]) {
        int num[] = { 3, 6, 1, 4, 9, 7, 4, 6, 2, 8 };

        // the for-each loop: integer type data with n as the iteration variable used to access the array num[]
        // Original array elements
        System.out.println("The original array elements are : ");

        for (int n : num) {
            System.out.print(n + " ");
        }

        // Changes made to n
        System.out.println("\nArray elements after changes being made to n : ");

        for (int n : num) {
            System.out.print(n + " ");
            n += 2;
        }
    }
}
