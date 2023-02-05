#include <stdio.h>

int	main() {
	int score = 89;

	if (score >= 90)
		printf("%s", "Top 10%\n");
	else if (score >= 80)
		printf("%s", "Top 20%\n");
	else if (score > 75)
		printf("%s", "You passed.\n");
	else
		printf("%s", "You did not pass.\n");

	return 0;
}
/*
 * THE DIFFERENCE BETWEEN "IF" AND "ELSE IF"
 *
 * When we use a "else if" we are saying: "If the condition above me is a lie, then check me!".
 * If we use just "if" we are saying: "It doesn't matter if the condition above me is true or false, check me!".
 */
