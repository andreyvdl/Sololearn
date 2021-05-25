#include <stdio.h>

int	main() {
	char city[40];

	printf("Enter your favorite city: ");
	fgets(city, 40, stdin);

	fputs(city, stdout);
	printf("  is a fun city.");

	return 0;
}

/*
 * The "fputs", differently from "printf" and "puts" will send the string to a pointer.
 * In the case above the pointer is "stdout", it will make print to the screen.
 */