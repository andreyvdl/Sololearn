#include <stdio.h>

int	factorial(int num);

int	main() {
	int x = 5;

	printf("The factorial of %d is %d\n", x, factorial(x));

	return 0;
}

int	factorial(int num) {

	if (num == 1)
		return (1);
	else
		return (num * factorial(num - 1));
}

/*
 * A recursive function is a function that will give the final result to the main after many repetitions, in this case we created a recursive factorial function.
 */