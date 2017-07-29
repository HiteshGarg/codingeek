/**
 * This program creates one float object and three double objects.
 * Check whether number is infinite or Nan and displays the sum of the last two numbers
 */

public class FloatDoubleDemo {

    public static void main(String args[]) {
        //Wrapping the float number into Float Object.infinite value
        Float f = new Float(1 / 0.);
        //NaN value
        Double d1 = new Double(0 / 0.);
        //wrapping the given double number into Double object
        Double d2 = new Double(52.46);
        //wrapping the given double number into Double object
        Double d3 = new Double(25.77);
        //calculating sum using the function sum
        double s = Double.sum(d2, d3);

		/*Displaying the values and using the function isInfinite() and isNan()*/
        System.out.println(f + ": " + f.isInfinite() + "," + f.isNaN());
        System.out.println(d1 + ": " + d1.isNaN());
        System.out.println("sum of " + d2 + " and " + d3 + " : " + s);
    }
}
