struct student {
	int age;
	int grade;
	char name[40];
};

struct student s1 = {19, 9, "John"};
struct student s2;
s2 = (struct student) {22, 10, "Batman"};
struct student s3
= { .grade = 9, .age = 19, .name = "Andrey"};

/*
 * You can declare variables to the structure, you need to put the keyword "struct" and the struct tag before the variable name.
 * In the e.g. above the structure "student" has now variable "s1" and "s2".
 *
 * In the e.g. above you can also se the 3 different ways of declaring info of the variable.
 * You can do it after the declaration on the same line, calling the variable and by giving details to the variables inside of the structure.
*/