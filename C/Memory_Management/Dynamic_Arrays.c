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
}