/*
 * You are making a robot that should categorize items by their color.
 * Each color corresponds to a box with a specific number.
 * For simplicity, our program will handle 3 colors:
 * red goes to box #1
 * green goes to box #2
 * black goes to box #3
 * 
 * Your program needs to take a color as input and output the corresponding box
 * number.
 */

import java.util.Scanner;

public class Boxes {
	public static void main(String[] args) {
		//your code goes here
		Scanner scan = new Scanner(System.in);

		switch (scan.nextLine()) {
			case "red":
			case "Red":
			case "RED":
				System.out.println("1");
				break;
			case "green":
			case "Green":
			case "GREEN":
				System.out.println("2");
				break;
			case "black":
			case "Black":
			case "BLACK":
				System.out.println("3");
				break;
			default:
				System.out.println("Error");
		}
	}
}
