/*
 * The program you are given declares a LinkedList of integers, takes 5
 * numbers from user, and add them to it.
 * Write a program to calculate and output the sum of them elements.
 */

import java.util.Scanner;
import java.util.Iterator;
import java.util.LinkedList;

class Main
{
	public static void main(String[ ] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		LinkedList<Integer> nums = new LinkedList<Integer>();
		
		while(nums.size() < 5)
		{
			int num = scanner.nextInt();
			nums.add(num);
		}
		
		
		int sum = 0;
		//your code goes here
		for (Iterator<Integer> it = nums.iterator(); it.hasNext();)
		{
			sum += it.next();
		}
		
		System.out.println(sum);
	}
}
