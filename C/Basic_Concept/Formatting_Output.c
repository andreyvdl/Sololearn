#include <stdio.h>

int	main() {
	printf("The tree has %d apples.\n", 22);
	printf("\"Hello World!\"\n"); //Blackslash "\" can be used to include special characters, these special characters are "\t, \\, \b, \', \" and \n", being respectively "horizontal tab(do the same as press tab), backslah(prints a backslash), backspace(delete the previous line), single quote(add a single quote), double quote(add a double quote) and new line(break the line)".

	printf("Color : %s, Number: %d, float: %5.2f \n", "red", 42, 3.14159); //The letter that comes after the "%" sign represents the character that is going to be printed, these can be: "d, c, s, f, e and x", they mean respectively represents: "Decimal, Character, String, Float, sciEntific notation and heXadecimal".
	printf("Pi = %3.2f\n", 3.14159); //In this case we are using after the "%" sign numbers and period ".", the first number represent how much numbers i want to print, the period serves to separete the width from the precision, precision determines how many numbers i want to print after the period, this of course means that it only works on float and double, BUT, i can use it on a string to determinate how many characters i want to print.
	printf("Pi = %8.5f\n", 3.14159); //In a case where i want to print more numbers than i have, the PC will add spaces before print the numbers.
	printf("Pi = %-8.5f\n", 3.14159); //To counter this you can add a "-" before the width to align to the left.
	printf("There are %d %.3s in the tree.", 22, "apples");

	return 0;
}