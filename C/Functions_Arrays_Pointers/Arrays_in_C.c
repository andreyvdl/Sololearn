#include <stdio.h>

int	main() {
	float test_scores[5] = {3.25, 6.55, 10.0, 1.25, 0.99};
	float final_score;
	int n;

	printf("The second element is %.2f\n", test_scores[1]);
	test_scores[1] = 7.50;
	printf("Now the second element is %.2f\n", test_scores[1]);

	for (n = 0; n < 5; n++) {
		final_score += test_scores[n];
	}
	final_score = final_score / n;

	printf("Your final score is %.2f\n", final_score);

	return 0;
}

/*
 * The array holds anything that the program says it will hold, in the first case a test score array is holding the scores.
 * "3.25" it's in position 0 of the array and "0.99" it's in the 4 position.
 * Arrays can be used on loops to get some kind of information, in the case above we used the array in a loop to get a student final score.
 */