#include <stdio.h>

int main() {
	char input[10];
	int num;

	printf("Enter a number: ");
	gets(input);
	printf("%d", num = atoi(input));

	return 0;
}

/*
 * "atoi" is a function that converts numbers on strings to integer.
 * We can also use "atof" to convert a string to float, and "atol" for a long integer.
 */