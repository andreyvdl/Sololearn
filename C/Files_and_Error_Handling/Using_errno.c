#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main() {
	FILE *fptr;
	
	errno = 0;
	fptr = fopen("c:\\nonexistantfile.txt", "r");
	if (fptr == NULL) {
		fprintf(stderr, "Error opening file. Error code:%d\n", errno);
		exit(EXIT_FAILURE);
	}

	fclose(fptr);
	return 0;
}

/*
 * "errno" needs to be declared as 0, because the errors start counting from 0.
 * You need to use "fprintf" to print the "stderr".
*/