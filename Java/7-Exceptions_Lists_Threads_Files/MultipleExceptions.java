/*
 * You need to write a divider program which will operate with integers,
 * The program you are given should take two integers as input and execute
 * the division, but we need to handle two exceptions:
 * 1. the divider shouldn't be zero
 * 2. both inputs should be integers.
 * Complete the program to handle them. For the first exception, the program
 * should output "Еrror: division by zero"; and for the second one,
 * "Error: wrong value type".
 */

import java.util.Scanner;
import java.util.InputMismatchException;

class Main
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);

		try
		{
			int num1 = scanner.nextInt();
			int num2 = scanner.nextInt();
			/*
			1. Error: division by zero
			2. Error: wrong value type
			*/
			//your code goes here
			divide(num1, num2);
		}
		catch(InputMismatchException err)
		{
			System.out.println("Error: wrong value type");
		}
		catch(ArithmeticException err)
		{
			System.out.println("Error: division by zero");
		}
	}

	public static void divide(int num1, int num2)
	throws ArithmeticException
	{
		if (num2 == 0)
			throw new ArithmeticException(null);
		System.out.println(num1 / num2);
	}
}
