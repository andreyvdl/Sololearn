#include <stdio.h>

int	main() {
	float	new_price, average;
	float	price = 6.50;
	int		increase = 2, count = 4, total = 23;

	new_price = price + increase; //The "price" variable was automatically converted from "int" to "float", because we are adding with a "float" variable, to give the result to a "float" variable.
	printf("New price is %4.2f", new_price);

	average = (float) total / count; //Here we are transforming a "int" into a "float", if we don't do that, the result will be equal to a int value conversed to float (5.00), insted of a true float result (5.75).
	printf("\nAvarage is equal to %4.2f", average);

	return 0;
}