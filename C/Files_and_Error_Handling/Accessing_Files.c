#include <stdio.h>

int main() {
	FILE *fptr;

	fptr = fopen("myfile.txt", "w"); /* fopen(filename, mode) */

	if (fptr == NULL) {
		printf("Error opening file.");
		return -1;
	}

	fclose(fptr); /* fclose(filename) */

	return 0;
}

/*
 * The stdio.h library contains a typedef called "FILE".
 * It also have some functions as "fopen" and "fclose".
 * With fopen you need to use some commands like.
 * r = read a file that exist.
 * w = write a file that doesn't exist.
 * -a = append a file that don't exist.
 * -r+ = reand a write from the beginning.
 * -w+ = read and write overwriting the file.
 * -a+ = read and write appending the file.
 * It will return a "EOF" if a error occur in closing.
*/