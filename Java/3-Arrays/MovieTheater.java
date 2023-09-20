/*
 * You are creating a ticketing program for a small movie theater.
 * The seats are represented using a 2-dimensional array.
 * Each item can have the values 1 and 0 - 1 is occupied, and 0 if it's free.
 * 
 * Your program needs to take as input the row and the column of the seat and
 * output Free if it's free, and Sold if it's not.
 */

import java.util.Scanner;

public class MovieTheater
{
	public static void main(String[] args)
	{
		int[][]	seats = {{0, 0, 0, 1, 1, 1, 0, 0, 1, 1},
		{1, 1, 0, 1, 0, 1, 1, 0, 0, 0},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
		{0, 1, 1, 1, 0, 0, 0, 1, 1, 1}
		};
		Scanner	scan = new Scanner(System.in);
		//your code goes here
		int[] pos = new int[2];

		for (int i = 0; i < 2; i++)
			pos[i] = scan.nextInt();
		if (pos[0] < 0 || pos[0] > 4 || pos[1] < 0 || pos[1] > 9)
			System.out.println("Error");
		else if (seats[pos[0]][pos[1]] == 0)
			System.out.println("Free");
		else
			System.out.println("Sold");
	}
}
