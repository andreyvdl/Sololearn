#include <stdio.h>
#include <string.h>

union val {
	int int_num;
	float fl_num;
	char str[20];
};

int main() {
	union val test;

	test.int_num = 123;
	test.fl_num = 98.76;
	strcpy(test.str, "hello");

	printf("%d\n", test.int_num);
	printf("%4.2f\n", test.fl_num);
	printf("%s\n", test.str);
}

/*
 * As said before Unions hold information on the same memory, so when you run the code, the terminal goes crazy.
 * The last info received by the Union it will be the only that will work.
*/