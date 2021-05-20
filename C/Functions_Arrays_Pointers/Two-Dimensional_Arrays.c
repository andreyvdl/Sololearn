#include <stdio.h>

int	main() {
	int	a[2][3] = {
		{3, 2, 6},
		{4, 5, 20}
	};
	char b[2][3] = { {'A', 'n', 'd'}, {'r', '$', 'y'} };
	int l;
	int c;

	b[1][1] = 'e';
	printf("These are the only odd numbers in this array %d, %d\n", a[0][0], a[1][1]);
	for (l = 0; l < 2; l++)
		for (c = 0; c < 3; c++)
			printf("%c", b[l][c]);
	
	return 0;
}

/*
 * A array made of two definitions is called a two-dimensional array, or a matrix.
 * The first value represent the lines and the second the columms.
 */