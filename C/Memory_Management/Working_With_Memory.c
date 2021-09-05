#include <stdio.h>

int main() {
	int x;
	int arr[10];

	printf("x = %d", sizeof(x));
	printf("\narr = %d", sizeof(arr));

	return 0;
}

/*
 * A int variable uses 4 bytes of the memory.
 * So a array declared as a int and with 10 blocks (0-9), will have 40 bytes.
 * You can also use Dynamic memory allocation to allocate and free memory.
*/