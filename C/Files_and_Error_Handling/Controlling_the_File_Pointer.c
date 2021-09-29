#include <stdio.h>
#include <string.h>

typedef struct {
	int id;
	char name[20];
} item;

int main() {
	FILE *fptr;
	item first, second, secondf;

	first.id = 10276;
	strcpy(first.name, "Widget");
	second.id = 11786;
	strcpy(second.name, "Gadget");

	fptr = fopen("info.dat", "wb");
	fwrite(&first, 1, sizeof(first), fptr);
	fwrite(&second, 1, sizeof(second), fptr);
	fclose(fptr);

	fptr = fopen("info.dat", "rb");

	fseek(fptr, 1*sizeof(item), SEEK_SET); // fseek(file, num_bytes, from_pos)
	fread(&secondf, 1, sizeof(item), fptr);
	printf("%d	%s\n", secondf.id, secondf.name);
	fclose(fptr);

	return 0;
}

/*
 * ftell(file) return a long int value to the file pointer position in number of bytes from the start of the file.
 * fseek moves the file pointer position by the number of bytes relative to the position.
 * The "from_pos" can use "SEEK_SET, SEEK_CUR and SEEK_END", set will begin from the start, cur will begin from the current position and end will begin at the end.
*/