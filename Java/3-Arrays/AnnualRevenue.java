/*
 * The given code declares an array that holds the monthly revenues for a
 * company for a year.
 * You need to calculate the average monthly revenue for the year.
 * 
 * For that, calculate the sum of the revenue for all the months and divide it
 * by the number of items in the array.
 */

public class AnnualRevenue
{
	public static void main(String[] args)
	{
		double[]	revenue = {88750, 125430, 99700, 14500, 158000, 65000,
			99000, 189000, 210000, 42000, 165800, 258900};
		//your code goes here
		double		sum = 0;

		for (double value: revenue)
			sum += value;
		System.out.println(sum / revenue.length);
	}
}
