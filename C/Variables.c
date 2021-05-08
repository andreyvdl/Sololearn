#include <stdio.h>

int	main() {
	int	a, b; //Variables are composed of: "type(int, float, char or double) and an identifier(can be anything that you write, but at least it needs to be composed of letters, numbers and underscore character)", you can declare various variables separating them by ", ", e.g. "int This_is_a_Acceptable_variable_42, 7h15_15_4l50_4cc3p74bl3".
	float	salary = 56.23; //You can declare the variable and give it a value in the same line.
	char	letter = 'Z'; //The char "Z" is on single quotes because it's a character from the ASCII table, you can substitute this by the number "90" without single quotes, because 90 is the value of "Z" on the ASCII table.
	a = 8; //Or you can declare the value later in the code.
	b = 34;
	int	c = a+b; //You also can also declare tha value of a variable, based on logical inputs, e.g "int c = 8+34, c will be equal to 42".

	printf("%d \n", c); //The "%d" indicates that we want to print the value of a int that is on the variable "c".
	printf("%f \n", salary); //The "%f" indicates that we want to print the value of a float that is on the variable "salary".
	printf("%c \n", letter); //The "%c" indicates that we want to print the value of a char that is on the variable "letter".

	return 0;
}