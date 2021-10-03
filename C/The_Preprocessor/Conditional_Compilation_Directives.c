#include <stdio.h>

#define LEVEL 4

int main() {
	#if !defined(LEVEL)

	#elif LEVEL > 5

	#elif LEVEL > 4

	#else

	#endif

	return 0;
}

/*
 * The directives of the e.g. works just like the original "if, else if and else".
 * The "#if" can be used together with a "defined()".
*/