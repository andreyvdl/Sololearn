#include <stdio.h>

void	say_hello(int num_times) {
	int k;
	for (k = 0; k < num_times; k++)
		printf("Hello\n");
}

int	main() {
	void (*funptr)(int);
	funptr = say_hello;
	funptr(3);

	return 0;
}

/*
 * You can create a pointer to a function, that way you can use the function multiple times only with different names.
 * You need to declare the return type with the pointer name and paramenters between parenthesis.
 */