/*
 * You always tip 15% of the bill amount.
 * To make the calculation easier, you decide to write a program that will do that for you.
 * 
 * Task: Take the bill amount as input and output the corresponding tip amount,
 * which should be 15% of the amount.
 */

import java.util.Scanner;

public class TipCalculator {
	public static void main(String[] args) {
		// your code goes here
		Scanner	scan = new Scanner(System.in);
		double	bill = scan.nextDouble() * 0.15;
		System.out.println(bill);
	}
}
