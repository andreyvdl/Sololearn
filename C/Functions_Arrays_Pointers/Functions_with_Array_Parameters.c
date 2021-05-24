#include <stdio.h>

int	add_up(int *a, int num_elements) {
	int	total = 0;
	int k;

	for (k = 0; k < num_elements; k++)
		total += a[k];

	return (total);
}

int	main() {
	int	orders[5] = {100, 220, 37, 16, 98};

	printf("Total orders is %d\n", add_up(orders, 5));

	return 0;
}

/*
 * The value of an array can't be send to a function, but an array is a pointer, so you can send this pointer to the function.
 * You can also return a pointer of an array, you just need to add a "*" before the function name to indicate that.
 */