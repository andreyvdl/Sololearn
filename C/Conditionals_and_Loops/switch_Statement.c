#include <stdio.h>

int	main() {
	int	num = 3;

	switch (num) {
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		default:
			printf("Not 1, 2, or 3.\n");
	}
	return 0;
}

/*
 * Switch is a condition where it compares the expression with the expression on the cases.
 * Obligatorily you need to have a case called "default", it is similar to a else, if nothing is true, it will execute it.
 * You can add as many cases as you want, but if a case is true, it will execute every case below that.
 * But if you use a "break", you can stop from executing any other case.
 */