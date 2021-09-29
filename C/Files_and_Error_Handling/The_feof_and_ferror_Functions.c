#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	FILE *fptr;
	int c;

	errno = 0;

	fptr = fopen("myfile.txt", "r");
	if (fptr == NULL) {
		fprintf(stderr, "Error opening file. %s\n", strerror(errno));
		exit(EXIT_FAILURE);
	}

	while ((c = getc(fptr)) != EOF)
		printf("%c", c);

	if (ferror(fptr)) { // ferror(file)
		printf("I/O error reading file.");
		exit(EXIT_FAILURE);
	}
	else if (feof(fptr)) // feof(file)
		printf("End of file reached.");

	fclose(fptr);
	return 0;
}

/*
 * "feof" returns a nonzero value if it reachs the EOF, 0 otherwise.
 * "ferror" returns a nonzero value if finds a error, 0 otherwise.
*/