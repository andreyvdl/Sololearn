/*
 * Write a program to take numbers as input and return the first number
 * raised to the power of the second number.
 */

import java.util.Scanner;

class Main
{
	public static void main(String[] args)
	{
		Scanner read = new Scanner(System.in);
		int num1 = read.nextInt();
		int num2 = read.nextInt();

		//your code goes here
		System.out.println(Math.pow(num1, num2));
	}
}
