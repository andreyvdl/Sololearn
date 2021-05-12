#include <stdio.h>

int	main() {
	int	x;
	int	z = 2, y = 2;

	//You can use "-- and ++" to increase or decrease a value.
	x = z++; //The position of "-- and ++" is important, if put after the variable, it will give the value to "x", then it will increase.
	printf("x = %d and z = %d", x, z);
	x = z++;
	printf("\nx = %d and z = %d", x, z);
	x = --y; //If put it before, it will decrease the value, then give it to "x".
	printf("\nx = %d and y = %d", x, y);
	x = --y;
	printf("\nx = %d and y = %d", x, y);

	return 0;
}