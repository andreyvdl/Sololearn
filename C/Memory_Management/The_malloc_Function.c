#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr;

	ptr = malloc(10 * sizeof(*ptr)); 	/* malloc(bytes) it's the same as a array*/
										/* a two-dimensional arrray need (rows*columns)*sizeof(datatype) */
	if (ptr != NULL)
		*(ptr + 2) = 50;

	printf("%d", ptr[2]);

	free(ptr); /* free(), releases the memory */

	return 0;
}

/*
 * Malloc allocates memory (10*4), that way i'm saying: "pick up 40 bytes of ram to use later".
 * Yet, on this test we only used 2 bytes.
*/