public class Switch {
	public static void	main(String[] args) {
		int	day = 2;
		switch (day) { // condition to be compared with cases
			case 1: // case x
				System.out.println("Monday");
				break; // without the break it will just fall to the next case
			case 2:
				System.out.println("Tuesday");
				break;
			case 3:
				System.out.println("Wednesday");
				break;
			default: // if none of the cases above are true
			// no need to put a break on the default, as it is the last case
				System.out.println("Another day");
		}
	}
}
