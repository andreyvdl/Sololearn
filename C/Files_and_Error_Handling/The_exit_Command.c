#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 10, y = 0;

	if (y != 0)
		printf("x / y = %d", x/y);
	else {
		printf("Divisor is 0. Program exiting.");
		exit(EXIT_FAILURE);
	}
}

/*
 * "exit(int)" is a command that stop the program and send the exit code to another program.
 * You can use 0 for a success exit or -1 to a faulure, but you can also use "EXIT_SUCCESS and EXIT_FAILURE" from the "stdlib.h".
*/