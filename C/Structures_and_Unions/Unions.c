#include <stdio.h>
#include <string.h>

union val {
	char str[20];
};

union val u1 = {"test"};
union val u2;

int main() {
	u2 = u1;

	printf("%s", u2.str);
}
/*
 * Unions work just like typedef, but they use the same memory location for one user.
 * they can only hold one information, if you try to use a int and a str at the same time you will only print the first asked.
 */