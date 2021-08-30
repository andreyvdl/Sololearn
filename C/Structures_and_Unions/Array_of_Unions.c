#include <stdio.h>
#include <string.h>

union val {
	int int_num;
	float fl_num;
	char str[20];
};

union type {
	int i_val;
	float f_val;
	char ch_val;
};

int main() {
	union val nums[20];
	int k;

	for (k = 0; k < 10; k++) {
		nums[k].int_num = k;
	}

	for (k = 0; k < 10; k++) {
		printf("%d  ", nums[k].int_num);
	}

	/* --------------------------------- */

	union type arr[3];
	arr[0].i_val = 42;
	arr[1].f_val = 3.1415;
	arr[2].ch_val = 'x';

	printf("\n%d  %5.4f  %c", arr[0].i_val, arr[1].f_val, arr[2].ch_val);

	return 0;
}

/*
 * Arrays hold elements of any data type, that way you can use array to use multiple members of a union.
*/