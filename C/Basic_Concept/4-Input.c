#include <stdio.h>

int	main() {
	char a = getchar(); //The "getchar" function pick up the first char that the user input in the terminal.
	char s[100]; //This is a "array" or you could call it a "string", the number 100 indicates that the array has 100 elements, the string is type "char" so it can be made of any value from the ASCII table in every element. You can define de elements of the string like this: "char s[7] = "Andrey"; || char s[7] = {65, 110, 100, 114, 101, 121};", keep in mind that the element starts on 0 so the value 7 is actually 6, we need 6 elements because we need a null ("\0") element at the end to say the string reach to the end, you are saying that the array has 6 elements that create a string of characters, and the elements from 0 to 5 are "andrey" and the 6 element being NULL "\0".
	int n;
	int m;

	gets(s); //The "gets" function pick up the string that the user input in the terminal, in this case, as the "getchar" comes first, it will pick up the first value and the "gets" will get the second onward.
	scanf("%d %d", &n, &m); //The "scanf" function scans the input in the terminal and assing it to the address in the memory for that variable, that's why we have to put "&" before the function name, in this case we are saying: "We want the value scaned to be in the memory adress of a int varible called "n"".
	printf("You entered: %c", a);
	printf("\nYou entered: %s", s); //The "%s" indicates that we want to print the string that is in the variable "s".
	printf("\nYou entered: %d + %d = %d", n, m, n+m);
	return 0;
}
