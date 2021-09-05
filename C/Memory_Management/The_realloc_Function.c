#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr;

	ptr = malloc(10 * sizeof(*ptr));
	if (ptr != NULL)
		ptr[2] = 50;

	ptr = realloc(ptr, 100 * sizeof(*ptr)); /* realloc(ptr, new_size) */
	if (ptr != NULL)
		*(ptr + 30) = 75;

	printf("ptr + 2 = %d\nptr[30] = %d", *(ptr + 2), ptr[30]);

	free(ptr);

	return 0;
}

/*
 * realloc will hold original content in memory and expand the blocks.
 * It's allways good add an if condition in case the memory is not enough.
*/