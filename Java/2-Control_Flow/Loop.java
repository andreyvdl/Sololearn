public class Loop {
	public static void main(String[] args) {
		int	i = 0;

		System.out.println("While:");
		while (i < 10) { // will loop until i is 5
			System.out.println(i);
			++i;
		}
		System.out.println("Do..while:");
		do { // will loop until i is 0 (executing at least once)
			System.out.println(i);
			++i;
		} while (i < 10);
		System.out.println("For:");
		for (int j = 5; j > 0; --j) // initiates, checks, executes, increments
			System.out.println(j);
		// a for with (;;) is a infinite loop
		// a while with (true) is a infinite loop
		// we can use `break` as a way to exit a loop early
		// the keyword `continue` let us skip a loop iteration
	}
}
