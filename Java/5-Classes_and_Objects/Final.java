/*
 * `final` keyword does the same as const in other languages.
 * Create a variable that can't be changed.
 */


class Main
{
	public static void main(String[] args)
	{
		final double PI = 3.1415;

		// PI = 3.14; // Generates a error
		System.out.println(PI);
	}
}
