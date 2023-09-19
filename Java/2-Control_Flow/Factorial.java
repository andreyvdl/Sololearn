/*
 * The factorial of a number N is equal to 1 * 2 * 3 * ... * N
 * For example, the factorial of 5 is 1* 2 * 3 * 4 * 5  = 120.
 * 
 * Create a program that takes a number from input and output the factorial of
 * that number.
 */

import java.util.Scanner;

public class Factorial {
	public static void main(String[] args) {
		Scanner	scan = new Scanner(System.in);
		int		n = scan.nextInt();
		int		res = 1;

		if (n > 0) {
			while (n > 1) {
				res *= n;
				--n; 
			}
		}
		else if (n < 0) {
			while (n < 0) {
				res *= n;
				++n;
			}
			if (res > 0)
				res = -res;
		}
		System.out.println(res);
	}
}
