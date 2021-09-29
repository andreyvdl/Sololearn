#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float k = -5, num = 100, result;

	errno = 0;
	result = sqrt(k);
	if (errno == 0)
		printf("%f ", result);
	else if (errno == EDOM)
		fprintf(stderr, "%s\n", strerror(errno));

	errno = 0;
	result = exp(num);
	if (errno == 0)
		printf("%f ", result);
	else if (errno == ERANGE)
		fprintf(stderr, "%s\n", strerror(errno));
}

/*
 * "EDOM" is the "errno" value when a domain is out of range.
 * "ERANGE" is the "errno" value when there's a range error.
 * Both only work when "math.h" is included.
*/