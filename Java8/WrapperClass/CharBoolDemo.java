/*This program shows the use of Character and Boolean wrapper classes and some of its functions*/

public class CharBoolDemo {
	public static void main(String args[]) {
		Character ch = new Character('A');//Wrapping the character 'A' into the object ch
		Character ch1 = new Character(' ');//Wrapping the whitespace character ' ' into the object ch1
		Boolean bool = new Boolean(true);//bool is assigned true
		Boolean boolval = new Boolean(false);//boolval is assigned false
		
		/*Some of the methods are shown below*/
		System.out.println(ch + " is digit : " + Character.isDigit(ch) + " , isLetter : " + Character.isLetter(ch));
		System.out.println(ch + " is Whitespace : " + Character.isWhitespace(ch1));
		System.out.println("The logical AND of " + bool + " and " + boolval + " is " + Boolean.logicalAnd(bool,boolval));
	}
}
