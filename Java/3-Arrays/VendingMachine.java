/*
 * You are making a program for a vending machine that provides drinks.
 * The menu of the drinks is stored in an array called menu.
 * 
 * Take the choice of the customer as an integer from input and output the
 * corresponding menu item.
 * Also, check for errors: in case the input is out of the range of the array,
 * output "Invalid".
 */

import java.util.Scanner;

public class VendingMachine
{
	public static void main(String[] args)
	{
		String[]	menu = {"Tea", "Espresso", "Americano", "Water",
			"Hot Chocolate"};
		Scanner		scan = new Scanner(System.in);
		//your code goes here
		int			num = scan.nextInt();
		
		if (num < 0 || num > 4)
			System.out.println("Invalid");
		else
			System.out.println(menu[num]);
	}
}
