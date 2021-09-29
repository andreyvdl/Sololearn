#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main() {
	FILE *fptr;
	errno = 0;

	fptr = fopen("c\\nonexistantfile.txt", "r");
	if (fptr == NULL) {
		perror("Error");
		fprintf(stderr, "%s\n", strerror(errno));
		exit(EXIT_FAILURE);
	}
}

/*
 * For "strerror" to work you need to include "string.h"
*/