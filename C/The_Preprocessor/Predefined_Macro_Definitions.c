#include <stdio.h>
#include <string.h>

int main() {
	char curr_time[10], curr_date[12];
	int std_c;

	strcpy(curr_time, __TIME__);
	strcpy(curr_date, __DATE__);
	printf("%s %s\n", curr_time, curr_date);
	printf("Filename: %s\n", __FILE__);
	printf("This is line %d\n", __LINE__);
	std_c = __STDC__;
	printf("STDC is %d", std_c);

	return 0;
}

/*
 * Some predefined macros exist in C and you can you they without "#define".
 * They are:
 * "__DATE__" shows date as a string in "mm dd yyyy";
 * "__TIME__" shows time as a string in "hh:mm:ss";
 * "__FILE__" shows the current filename as a string;
 * "__LINE__" shows the current line as a int;
 * "__STDC__" ... is 1.
*/