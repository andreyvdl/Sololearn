/*
 * You are making a program for a water sensor that should check if the water
 * is boiling.
 * Take the integer temperature in Celsius as input and output "Boiling" if the
 * temperature is above or equal to 100.
 * Output "Not boiling" if it's not.
 */

import java.util.Scanner;

public class BoilingWater {
	public static void	main(String[] args) {
		// your code goes here
		Scanner scan = new Scanner(System.in);
		int	temperature = scan.nextInt();

		if (temperature >= 100)
			System.out.println("Boiling");
		else
			System.out.println("Not boiling");
	}
}
