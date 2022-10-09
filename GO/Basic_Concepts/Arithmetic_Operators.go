package main
import "fmt"

func main() {
	/*
	** Arithmetic operators are used to perform arithmetic operations;
	** Golang supports the following arithmetic operators:
		+ = addition;
		- = subtraction;
		* = multiplication;
		/ = division;
		% = modulus;
	** We can use the addition to concatenate two strings;
	** We can also use assignment operators to assign values to variables;
	** Golang supports the following assignment operators:
		+= = addition assignment;
		-= = subtraction assignment;
		*= = multiplication assignment;
		/= = division assignment;
		%= = modulus assignment;
	** We can also use relational operators to compare two values and return a bool value;
	** Golang supports the following relational operators:
		== = equal to;
		!= = not equal to;
		> = greater than;
		< = less than;
		>= = greater than or equal to;
		<= = less than or equal to;
	** We can also use logical operators to combine conditional statements;
	** Golang supports the following logical operators:
		&& = logical AND;
		|| = logical OR;
		! = logical NOT;
	*/
	var a int = 11
	var b int = 31
	var str1 string = "Golang "
	var str2 string = "is not that hard."
	var c int = a + b

	fmt.Println(c)
	fmt.Println(str1 + str2) // concatenate str1 with str2;
	fmt.Println("Clang " + str2) // concatenate "Clang " with str2;
	fmt.Println(a < b) // compare a with b and returns true or false;
	fmt.Println(a == b) // compare a with b and returns true or false;
	fmt.Println(c > a && a < b) // compare c with a and a with b and returns true or false;
	fmt.Println(!(c < b)) // compare c with b and returns true or false;
}