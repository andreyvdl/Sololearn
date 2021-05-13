#include <stdio.h>

int	main() {
	char n = 'x';

	if (n == 'x' || n == 'X')
		printf("Roman numeral value 10.\n");

	int	n2 = 42;

	if (n2 == 999 || (n2 > 0 && n2 <= 100))
		printf("Input valid.\n");

	return 0;
}