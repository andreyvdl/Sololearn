#include <stdio.h>

void* square (const void* num);

int main() {
	int x, *sq_int;
	x = 6;
	sq_int = (int *)square(&x);
	printf("%d squared is %d\n", x, *sq_int);

	return 0;
}

void* square (const void *num) {
	static int result;
	result = (*(int *)num) * (*(int *)num);

	return &result;
}

/*
 * If you declare that a function is a pointer void, then you can return an int, or float or char.
*/