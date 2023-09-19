/*
 * Your math teacher asked you to calculate the sum of the numbers 1 to N, 
 * where N is a given number.
 * 
 * Task: Take an integer N from input and output the sum of the numbers 1 to N,
 * inclusive.
 */

import java.util.Scanner;

public class Sum {
	public static void main(String[] args) {
		//your code goes here
		Scanner	scan = new Scanner(System.in);
		int		n = scan.nextInt();
		int		sum = 0;

		do {
			sum += n;
			n--;
		} while (n > 0);
		System.out.println(sum);
	}
}
