#include <stdio.h>

#define VAR(name, num) name##num

int main() {
	int x1 = 125, x2 = 250, x3 = 500;

	printf("%d\n", VAR(x, 3));

	return 0;
}

/*
 * The "##" operator is called, "token pasting" because it appends or pastes tokens together.
 * In the e.g. above it will pickup the "x" variable and print the 3 version of it.
*/