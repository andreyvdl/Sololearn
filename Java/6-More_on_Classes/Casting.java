/*
 * Computers understand only numbers, so every character has a numeric
 * representation.
 * The program you are given takes a character as input. Write a
 * program to output its numeric value.
 */

import java.util.Scanner;

class Main
{
	public static void main(String[] args)
	{
		Scanner read = new Scanner(System.in);
		char a = read.next().charAt(0);
		
		//your code goes here
		System.out.println((int)a);
	}
}
