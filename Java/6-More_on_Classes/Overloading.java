/*
 * Complete and overload the doubleTheValue() method to calculate the
 * double the value of the a and b variables.
 */

class Main
{
	public static void main(String[] args)
	{
		
		int a = 5;
		double b = 10.2;
		
		System.out.println(doubleTheValue(a));
		System.out.println(doubleTheValue(b));
				
	}
	//complete the method for integer value type
	public static int doubleTheValue(int value)
	{
		return value * 2;
	}
	//overload the method for double value type
	public static double doubleTheValue(double value)
	{
		return value * 2;
	}
}
