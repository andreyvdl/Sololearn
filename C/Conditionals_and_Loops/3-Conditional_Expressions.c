#include <stdio.h>

int	main() {
	int	y;
	int	x = 3;

	y = (x >= 5) ? 5 : x; //Here we are saying: "if the value of x is >= 5, then y will be equal to 5, if not, y will be equal to x".
	printf("%d", y);

	return 0;
}
