#include <stdio.h>

int main() {
	int x = 33;
	float y = 12.4;
	char c = 'a';
	void *ptr;

	ptr = &x;
	printf("void ptr points to %d\n", *((int *)ptr));
	ptr = &y;
	printf("void ptr points to %f\n", *((float *)ptr));
	ptr = &c;
	printf("void ptr points to %c\n", *((char *)ptr));

	return 0;
}

/*
 * A void pointer can be any other kind of type, in the exemple above we use it to be a int, float and char.
*/