/*
 * The program you are given declares an even nums ArrayList.
 * Write a program to take numbers as input and add them an ArrayList while
 * the size of the ArrayList isn't equal to 3.
 * Then calculate and output the average of all values in integers.
 */

import java.util.ArrayList;
import java.util.Scanner;

class Main
{
	public static void main(String[ ] args)
	{
		Scanner				scanner = new Scanner(System.in);
		ArrayList<Integer>	evennums = new ArrayList<Integer>();
		int					average = 0;

		while (evennums.size() < 3)
		{
			int num = scanner.nextInt();
			//your code goes here
			evennums.add(num);
		}
		//calculate and output the average integer value
		while (evennums.size() > 0)
		{
			int	idx = evennums.size() - 1;

			average += evennums.get(idx);
			evennums.remove(idx);
		}
		System.out.println(average / 3);
	}
}
