#include <stdio.h>

int main() {
	FILE *fptr;
	int c, stock;
	char buffer[200], item[10];
	float price;

	fptr = fopen("myfile.txt", "r");

	fgets(buffer, 20, fptr); /* fgets(buff, n, file) */
	printf("%s\n", buffer);

	fscanf(fptr, "%d%s%f", &stock, item, &price); /* fscaf(file, conversion_specifiers, vars) */
	printf("%d	%s	%4.2f\n", stock, item, price);

	while ((c = getc(fptr)) != EOF)
		printf("%c", c);
	
	fclose(fptr);

	return 0;
}

/*
 * The code above reads and print the information on a file.
 * "fgetc(file)" returns the character from the file, but if is at the end it will return EOF.
 * "fgets" read n-1 characters from the file, hold the string in the buff, the NULL is the last, if it finds a newline or reach the end of the file before n-1 only the characters get to that point are stored.
 * "fscanf" read characters from the file and put the inputs to the variables using the "conversion_specifiers", it will stop at a space or newline.
*/