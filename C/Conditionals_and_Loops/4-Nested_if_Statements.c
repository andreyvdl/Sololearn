#include <stdio.h>

int	main() {
	int	profit, clients, bonus;

	clients = 42;
	profit = 75 * clients;

	if (profit > 1000) { //If you use more than one line on the statement of the "if", it's extremelly recomended to use square brackets for easy read and not cause problem to a "else" condition.
		if (clients > 15)
			bonus = 100;
	}
	else
		bonus = 25;
	printf("Bonus = %d$", bonus);

	return 0;
}
