/*
 * Given the age of a person as an input, output their age group
 * 
 * Here are the age groups you need to handle:
 * Child: 0 to 11
 * Teen: 12 to 17
 * Adult: 18 to 64
 */

import java.util.Scanner;

public class AgeGroup {
	public static void main(String[] args) {
		Scanner	scan = new Scanner(System.in);
		int		age = scan.nextInt();
		// your code goes here
		if (age >= 0 && age <= 11)
			System.out.println("Child");
		else if (age >= 12 && age <= 17)
			System.out.println("Teen");
		else if (age >= 18 && age <= 64)
			System.out.println("Adult");
		else if (age < 0)
			System.out.println("Error");
	}
}
