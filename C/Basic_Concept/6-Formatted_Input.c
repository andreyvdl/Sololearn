#include <stdio.h>

int	main() {
	int		x, y;
	char	text[20];

	scanf("%2d %d %*f %5s", &x, &y, text); //The letters after the "%" symbol can be "d, c, s, f and x", being "Decimal, Character, String, Float and heXadecimal", you can also use a "%*" to skip the input or put a number to determinate the maximum number of characters.
	printf("%d %d %s", x, y, text);
}
