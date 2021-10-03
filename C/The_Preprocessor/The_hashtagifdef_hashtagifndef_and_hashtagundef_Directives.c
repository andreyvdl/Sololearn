#include <stdio.h>

#define RATE 0.08
#ifndef TERM
	#define TERM 24
#endif

int main() {
	#ifdef RATE
		#undef RATE
		printf("Redefining RATE\n");
		#define RATE 0.068
	#else
		#define RATE 0.068
	#endif

	printf("%f	%d\n", RATE, TERM);
	
	return 0;
}

/*
 * If the same macro is defined twice, you can use "#ifdef" to not have erros.
 * You could also use "#undef" to redefine a macro.
 * In the e.g. "RATE" is defined, so the "#ifdef" will compile and not generate a error.
 * The "#else" will compile if the "#ifdef RATE" is false.
 * You need to use "#endif" to close the block of code.
 * Also there is a directive called "#elif", it works like "else if".
 * "#ifndef" works the oposite of "#ifdef", it checks if the macro is not defined.
*/