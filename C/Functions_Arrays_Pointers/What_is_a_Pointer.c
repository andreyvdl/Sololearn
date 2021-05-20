#include <stdio.h>

int main() {
	int j = 63;
	int k;
	int *p;
	int **ptr;

	p = &j;
	ptr = &p;

	printf("The address of j is %x\n", &j);
	printf("p contains address %x\n", p);
	printf("The value of j is %d\n", j);
	printf("p is pointing to the value %d\n", *p);
	printf("ptr is pointing to the value %d\n", **ptr);

	k = *p + 1;
	k += *p;

	printf("-----------------------\n");
	printf("The value of j is %d\n", j);
	printf("The value of k is %d\n", k);
	printf("p is pointing to the value of %d\n", *p);

	*p = k;
	(*p)++;

	printf("-----------------------\n");
	printf("The value of j is %d\n", j);
	printf("The value of k is %d\n", k);
	printf("p is pointing to the value of %d\n", *p);

	return 0;
}

/*
 * Pointers are... pointers... literally, they are a variable that hold a memory address of another variable.
 * You can make a pointer by adding a "*" before the variable name.
 * You can make a pointer of a pointer by adding more "*".
 * You CAN'T point a double asterisk pointer to a no pointer variable.
 * You can only point a double asterisk pointer to a triple asterisk pointer or a pointer.
 * If you define that the pointer will receive a value and it's pointing to a variable, that variable will get the value.
 */