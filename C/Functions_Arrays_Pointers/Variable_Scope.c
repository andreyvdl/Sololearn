#include <stdio.h>

int	global1 = 0;

int	main() {
	int	local1, local2;

	local1 = 5;
	local2 = 10;
	global1 = local1 + local2;
	printf("%d \n", global1);

	return 0;
}

/*
 * You can create a global variables, that means that, the variable can be used at any point and any function, different from local varables that are only used inside the function.
 * But global variables aren't const, so it value will change.
 */