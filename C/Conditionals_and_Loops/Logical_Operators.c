#include <stdio.h>

int	main() {
	int	n = 42;

	if (n > 0 && n <= 100) {
		if (!(n < 0 || n > 100))
			printf("Range (1 - 100).\n");
	}
	return 0;
}

/*
 * The logical operators are "&&, || and !".
 * "&&" means "and", "||" means "or" and "!" means "the reverse of this".
 * In the case above, we are saying, "if n is bigger than 0 AND less or equal to 100, if (in reverse) n is less than 0 OR bigger than 100".
 */