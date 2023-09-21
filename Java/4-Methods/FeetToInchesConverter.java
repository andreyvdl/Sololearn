/*
 * You need to make a method that converts a foot value to inches.
 * 
 * 1 foot has 12 inches.
 * 
 * Define a convert() method, that takes the foot value as its argument and
 * outputs the inches value.
 * 
 * The result must be a double.
 */

import java.util.Scanner;

public class FeetToInchesConverter
{
	//your code goes here
	static void convert(double foot)
	{
		double	inches;

		if (foot < 1)
			System.out.println("Error");
		else
		{
			inches = foot * 12;
			System.out.println(inches);
		}
	}
	public static void main(String[] args)
	{
		Scanner	sc = new Scanner(System.in);
		double	num = sc.nextDouble(); 

		convert(num);
	}
}
