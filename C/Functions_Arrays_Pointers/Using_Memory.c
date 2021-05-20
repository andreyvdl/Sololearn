#include <stdio.h>

void test(int k);

int	main() {
	int i = 0;

	printf("The address of i is %x\n", &i);
	test(i);
	printf("The address of i is %x\n", &i);
	test(i);

	return 0;
}

void test(int k) {
	printf("The address of k is %x\n", &k);
}

/*
 * The address in memory of a variable it's the same until the end of the scope.
 * In the case above the variable "k" has a address different from the variable "i", because it's out of the main scope.
 */