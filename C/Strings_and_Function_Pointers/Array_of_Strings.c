#include <stdio.h>

int	main() {
	char trip[3][15] = {
		"suitcase",
		"passport",
		"ticket"
	};

	printf("Please bring the following:\n");
	for (int i = 0; i < 3; i++) {
		printf("%s\n", trip[i]);
	}
	
	return 0;
}

/*
 * If you only declare that you want the first value of the matrix, it will send all that's in the line of the first value.
 */