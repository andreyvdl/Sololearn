import java.util.Scanner; // imports the Scanner class

public class GettingUserInput {
	public static void	main(String[] args) {
		Scanner	sc = new Scanner(System.in); // prepares to get user input
		String	name = sc.nextLine(); // get string input from user
		int		age = sc.nextInt(); // get integer input from user
		float	temperature = sc.nextFloat(); // get float input from user
		double	grade = sc.nextDouble(); // get double input from user
		boolean	isHappy = sc.nextBoolean(); // get boolean input from user
	}
}
