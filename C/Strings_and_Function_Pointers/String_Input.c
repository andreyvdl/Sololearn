#include <stdio.h>

int	main() {
	char phrase[50];

	printf("Try to write a big phrase: \n");
	fgets(phrase, 50, stdin);
	printf("Output: %s\n", phrase);

	return 0;
}

/*
 * Differently from "scanf" and "gets" the "fgets" function will get only a certain quantity of characters for the string, especifically n - 1, because it reverses 1 space for the null byte at the end.
 * The "stdin" indicates that we want the standard input, the keyboard input.
*/