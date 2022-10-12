package main

import "fmt"

/*
** Golang has a switch statement like Clang, which is similar to the if-if else-else sequence;
** The syntax is as follows:
	switch variable {
	case value1:
		statements
	case value2:
		statements
	default:
		statements
	}
** We can also use the switch with conditions to check if a variable is in a range;
** Unlike Clang, in Golang we don't need to put a break after each case, it will automatically break once a case turns true;
** Like the if, switch can have short variable declaration;
*/

func main() {
	var num int
	var age int

	num = 3
	switch num {
	case 1:
		fmt.Println("One")
	case 2:
		fmt.Println("Two")
	case 3:
		fmt.Println("Three")
	default:
		fmt.Println(num)
	}
	fmt.Println("Insert your age:")
	fmt.Scanln(&age)
	switch {
	case age < 18 && age >= 0:
		fmt.Println("Not allowed")
	case age >= 18:
		fmt.Println("Allowed")
	case age < 0:
		fmt.Println("Invalid age")
	}
}
