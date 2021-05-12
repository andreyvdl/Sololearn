#include <stdio.h>

int	main() {
	int		quotient, remainder, area;
	int		length = 10, width = 5;
	float	result;
	float	f1 = 4.2, f2 = 2.5;

	//You can do mathematical operations using "+, -, *, / and %".

	area = length * width; //"*", means multiplication.
	printf("%d \n", area);
	printf("%d \n", quotient = length / width); //"/", means division.
	printf("%d \n", remainder = length % width); //"%", means rest of a division
	printf("%.2f \n", result = f1 / f2);

	return 0;
}