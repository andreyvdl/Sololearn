/*
 * You are making a Celsius to Fahrenheit converter.
 * Write a method to take the Celsius value as an argument and return the
 * corresponding Fahrenheit value.
 * 
 * The given code takes the celsius value as input and passes it to a fahr()
 * method, which you need to create.
 */

import java.util.Scanner;

public class CelsiusToFahrenheit
{
	//your code goes here
	static double fahr(double c)
	{
		double	f = c * 1.8 + 32;

		return (f);
	}
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		double c = sc.nextDouble(); 

		System.out.println(fahr(c));
	}
}
