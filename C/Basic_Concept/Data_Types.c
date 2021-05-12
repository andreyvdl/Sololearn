#include <stdio.h>

int	main() {
	printf("int: %ld \n", sizeof(int)); //integer represent a whole number.
	printf("float: %ld \n", sizeof(float)); //float represent a number with fractional part.
	printf("double: %ld \n", sizeof(double)); //double represent a float with double-precision.
	printf("char: %ld \n", sizeof(char)); //char represent a single character.
	//"%ld" stands for "long decimal".
	return 0;
}