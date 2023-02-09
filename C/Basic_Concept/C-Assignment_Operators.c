#include <stdio.h>

int	main() {
	int x = 2;

	printf("x = %d", x);
	x += 1; //You can put the operator together a equal sign to say: "i want the left variable to be equal to this operation (in this case x will be equal to x + 1)".
	printf("\nx + 1 = %d", x);
	x -= 1;
	printf("\nx - 1 = %d", x);
	x *= 3;
	printf("\nx * 3 = %d", x);
	x /= 2;
	printf("\nx / 2 = %d", x);
	x %= 2;
	printf("\nx %% 2 = %d", x);
	x += 3 * 2;
	printf("\nx + 3 * 2 = %d", x);

	return 0;
}
