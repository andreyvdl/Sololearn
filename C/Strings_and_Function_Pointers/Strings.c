#include <stdio.h>
#include <string.h>

int	main() {
	char str1[6] = "hello";
	char str2[] = "world";
	char str3[] = "STRINGS";

	printf("strlen:\t%d", strlen(str1));
	printf("\nstrcat:\t%s", strcat(str1, str2));
	printf("\nstrcpy:\t%s", strcpy(str1, str2));
	printf("\nstrlwr:\t%s", strlwr(str3));
	printf("\nstrupr:\t%s", strupr(str1));
	printf("\nstrrev:\t%s", strrev(str3));
	printf("\nstrcmp negative case:\t%d", strcmp(str1, str2));
	printf("\nstrcmp positvie case:\t%d", strcmp(str2, str3));
	printf("\nstrcmp equal case:\t%d", strcmp(str1, str1));
	
	return 0;
}

/*
 * The string library let you use some string syntaxes.
 * "strlen" count the lengh of the string.
 * "strcat" put a string at the end of another.
 * "strcpy" copy one string to another, array "dest" need to be big enough for the "src" string.
 * "strlwr" leaves the string in lowercase letters.
 * "strupr" leaves the string in uppercase letters.
 * "strrev" leaves the string in reverse.
 * "strcmp" compares two strings, if they are the same the result will be "0", if the first difference in "str1" is a value higher than "str2" it will return a positive int, and a negative int in the inverse case.
 * In the ASCII table "w" has a higher value than "h", in the same way "w" is higher than "S".
*/