public class Conditionals {
	public static void	main(String[] args) {
		int	age = 24;
		// condition comparators: ==, !=, <, >, <=, >=
		// you can use multiple conditions with && (and) and || (or) and ! (not)
		if (age >= 18) { // checek if a condition is true
			System.out.println("Welcome");
		}
		else if (age > 0) { // check if this condition is true only if the above was false
			System.out.println("Too young");
		}
		else { // just executes when the condition above is false
			System.out.println("Error");
		}
	}
}
