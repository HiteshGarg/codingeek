/**
 * Program to print the elements in a 2D array
 */
public class ForEachMultiDim {

    public static void main(String args[]) {

        int num[][] = { { 3, 6, 1 }, { 4, 9, 7 }, { 4, 6, 2 } };

        //the for-each loop: integer type data with n[] as the iteration variable used to access the array num[][]
        for (int n[] : num) {

            //The inner loop with iteration variable x used to access the multiple 1D arrays accessed by n[]
            for (int x : n) {
                System.out.print(x + " ");
            }
            System.out.println();
        }
    }
}
