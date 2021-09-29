#include <stdio.h>

int main() {
	FILE *fptr;
	char filename[50];

	printf("Enter the filename of the file to create: ");
	gets(filename);

	fptr = fopen(filename, "w");

	fprintf(fptr, "Inventory\n");
	fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29); /* fprintf(file, str, vars) */
	fputs("End of List", fptr); /* fputs(str, file) */

	fclose(fptr);

	return 0;
}

/*
 * The code above create a file and put information on it.
 * "fputc(char, file)" write a char to a file.
 * "fputs" write a string to a file.
 * "fprintf" prints the string to the file, str can include format specifiers and variables.
*/