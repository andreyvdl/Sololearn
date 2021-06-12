#include <stdio.h>

struct student{
	char name[50];
	int number;
	int age;
};

void showStudentData(struct student *st) {
	printf("\nStudent:\n");
	printf("Name: %s\n", st -> name);
	printf("Number: %d\n", st -> number);
	printf("Age: %d\n", st -> age);
}

int	main(void) {
	struct student st1 = {"Krishna", 5, 21};
	showStudentData(&st1);
}

/*
 * You can use "->" in the same way "student.name", you can also use "(*st).name".
*/