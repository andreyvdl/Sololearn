#include <stdio.h>

int main() {
	FILE *fptr;
	int arr[10];
	int x[10];
	int k;

	for (k = 0; k < 10; k++)
		arr[k] = k;

	fptr = fopen("datafile.bin", "rb");
	fread(x, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
	fclose(fptr);

	for (k = 0; k < 10; k++)
		printf("%d", x[k]);

	return 0;
}

/*
 * Files extensions are interesting.
 * .txt is a text file.
 * .bin is a binary data.
 * .csv is a comma separated values.
 * .dat is a data file.
*/