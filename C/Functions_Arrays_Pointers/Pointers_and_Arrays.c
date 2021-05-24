#include <stdio.h>

int	main() {
	int	a[5] = {22, 33, 44, 55, 66};
	int	*ptr;
	int	i;

	ptr = a;
	for (i = 0; i < 5; i++)
		printf("%d ", *(ptr + i));

	printf("\n--------------\n");
	ptr++;
	printf("%d	%x\n", *ptr, ptr);
	ptr += 3;
	printf("%d	%x\n", *ptr, ptr);
	ptr--;
	printf("%d	%x\n", *ptr, ptr);
	ptr -= 2;
	printf("%d	%x\n", *ptr, ptr);

	return 0;
}

/*
 * You can increase or decrease the value of "ptr" to correspond to the position on the array.
 */