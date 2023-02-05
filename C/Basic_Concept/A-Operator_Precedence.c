#include <stdio.h>

int	main() {
	int	result;
	int	a = 6, b = 4, c = 2;

	result = a - b + c;
	printf("%d \n", result);

	result = a + b / c; //As in the mathematical rule, you resolve the multiplication and division first.
	printf("%d \n", result);

	result = (a + b) / c; //As in the mathematical rule, you resolve what is in the parenthesis first, if theres another parenthesis inside, you resolve it first, if there's multiplication and division, you resolve it first.
	printf("%d \n", result);

	return 0;
	//Just to remind the priority order is: "() > *, / and % > + and -".
}
