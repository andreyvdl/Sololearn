typedef struct {
	int id;
	char title[40];
	float hours;
} course;

course cs1;
course cs2;

/*
 * "typedef" is a keyword that removes the necessity to write the keyword struct when declaring variables, making the code more clean and easy to read.
 * You now declare the "struct tag" at the end of the struct.
*/