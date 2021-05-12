#include <stdio.h>

int	main() {
	int	num = 41;

	num += 1;
	if (num == 42) //The relation operator used here is "equal to".
		printf("You won!");
	if (num < 41 || num >= 43 || num != 42) //The relation opeators used here are "less than" "greater than or equal to" and "not equal to", all the relational operators are represented by: "<, <=, >, >=, == and !=".
		printf("You lose!");
	if (num) //In a if condition, if the value is >= 1, then it's considerated as a true.
		printf("\nGoodbye.");

	return 0;
}