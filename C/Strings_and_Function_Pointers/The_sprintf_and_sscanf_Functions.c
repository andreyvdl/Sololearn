#include <stdio.h>

int	main() {
	char info[100];
	char info2[] = "SNES has 16";
	char dept[] = "HR";
	char videogame[25];
	int bits;
	int	emp = 75;

	sprintf(info, "The %s dept has %d employees.", dept, emp);
	printf("%s\n", info);

	sscanf(info2, "%s %*s %d", videogame, &bits);
	printf("The %s was a %d bits videogame.\n", videogame, bits);
	
	return 0;
}

/*
 * "sprintf" let you put a string in a array with other strings or data types inside.
 * In the exemple above, the "info" array is receiving a string with a call to the string in "dept" and a int in "emp".
 * "sscanf" pickup information from a string and stores in a variable.
 * In the exemple above, "info2" has information that is caught by "sscanf" and send to "videogame" and "bits".
*/