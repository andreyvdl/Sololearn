#include <stdio.h>

int	sum_up (int x, int y);

int	main() {
	int	x, y, result;

	x = 3;
	y = 12;
	result = sum_up(x, y);
	printf("%d + %d = %d", x, y, result);

	return 0;
}

int	sum_up (int x, int y) {
	x += y;
	return(x);
}

/*
 * You can return the variable a same function without needing to worry about losing the original value, the variables used in the function outside "main" are different, even if they have the same name.
 */
