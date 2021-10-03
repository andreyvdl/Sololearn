#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int *elements;
	int size;
	int cap;
} dyn_array;

dyn_array arr;

int main() {
	arr.size = 0;
	arr.elements = calloc(1, sizeof(*arr.elements));
	arr.cap = 1;


	arr.elements = realloc(arr.elements, (5 + arr.cap) *
	sizeof(*arr.elements));

	if (arr.elements != NULL)
		arr.cap += 5;

	if (arr.size < arr.cap) {
		arr.elements[arr.size] = 50;
		arr.size++;
	}
	else
		printf("Need to expand the array.");

	free(arr);

	return 0;
}