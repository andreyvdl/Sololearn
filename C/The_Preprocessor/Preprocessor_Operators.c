#include <stdio.h>

#define TO_STR(x) #x

int main() {
	printf("%s\n", TO_STR( 123\\12 ));

	return 0;
}

/*
 * The "#" macro operator is called "stringification" or "stringizing".
 * It convert the parameter as a string constant.
 * It will ignore white space and recognize escape sequences.
*/