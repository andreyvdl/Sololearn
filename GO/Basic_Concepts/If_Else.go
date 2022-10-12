package main

import "fmt"

/*
** As like many other programming languages, Golang has if-else statements;
** The syntax is as follows:
** if condition {
		statements
	} else {
		statements
	}
** The "else" need to be on the same line as the bracket ending of "if"
** Then we can make a if-if else-else sequence;
** In Golang we don't have a ternary if-else;
** We can use a short statement in the if-else first line, just need to put a semicolon;
*/

func main() {
	var x int

	x = 21
	if x >= 18 {
		fmt.Println("Allowed")
	} else {
		fmt.Println("Not allowed")
	}

	if y := 16; y > 18 {
		fmt.Println("You can drink")
	} else if y == 18 {
		fmt.Println("You can drink")
	} else {
		fmt.Println("You can't drink")
	}
}
