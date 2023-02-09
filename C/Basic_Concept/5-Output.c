#include <stdio.h>

int	main() {
	char a = getchar();
	char s[100];

	gets(s);
	printf("You entered: ");
	putchar(a); //"putchar" will put the char that is hold in the variable "a".
	printf("\nYou entered: ");
	puts(s); //"puts" will put the string that is hold in the variable "s".

	return 0;
}
