#include <stdio.h>

int	main() {
	int j;
	int	i = 0, max = 12, table = 10;

	for (; i <= table; i++) {
		for (j = 0; j <= max; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

/*
 * Just like "while" you can put another "for" inside a "for".
 */
