#include <stdio.h>

int	square(int x) {
	int y;

	y = x * x;

	return (y); 
}

int	main() {
	int x, result;

	x = 5;
	result = square(x);
	printf("%d squared is %d\n", x, result);

	return 0;
}

/*
 * "main" and "printf" are both functions, but you can also create you own function.
 * Functions are composed of a: "return type, function name and optional parameters".
 * Above we can see that, the function is named "square", the return type is "int", and the parameter is, the function will receive a "int" and inside the function the int recieved will be called "x".
 * You can also let the return type as "void" when the function doesn't need to return anything, and let it without parameter when the function don't need to receive anything.
 */
