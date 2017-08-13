/**
 * The following program shows the use of objects in expressions
 * thus demonstrating Autoboxing and Auto-unboxing
 */

public class AutoboxExpDemo {

    public static void main(String args[]) {
        Integer iOb = 56;
        System.out.println("Value of iOb = " + iOb);

        //In the statement iOb++, the object iOb is first auto-unboxed to
        // extract the value and perform the increment operation
        // and then it is autoboxed again
        iOb++;
        System.out.println("Value of iOb++ = " + iOb);

        //Similar to the above operation, in this case iOb is again unboxed
        //to operate on the value and then it is boxed again
        iOb = iOb * (iOb + 3);
        System.out.println("Final Value of iOb = " + iOb);
    }
}
