/**
 * Program to print the sum of 10 numbers stored in an array using the for-each loop.
 * The loop terminates if one of the elements is 7 and prints the obtained sum.
 */
public class ForEachBreak {

    public static void main(String args[]) {
        int num[] = { 3, 6, 1, 4, 9, 7, 4, 6, 2, 8 }, sum = 0;

        // the for-each loop: integer type data with n as the iteration variable used to access the array num[].
        for (int n : num) {
            //we simply write n as n stores the current array element that is being accessed
            sum = sum + n;
            if (n == 7) {
                break;
            }
        }
        System.out.println("The sum of the numbers in the array is : " + sum);
    }
}
