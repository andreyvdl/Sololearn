package main

import "fmt"

/*
** Like Clang we have the for loop on Golang;
** If you notice, the if-if else, switch and for have the conditions declared without parenthesis;
** Like Clang the syntax of for is:
**	for init; condition; post statement {
		statement
	}
** But the init and post statement are optional, that way, for become similar with a while loop;
*/
func main() {
	var x int
	var multiplication int

	for i := 0; i < 5; i++ {
		fmt.Println(i)
	}
	fmt.Println("=====================")
	x = 2
	multiplication = 1
	for multiplication <= 256 {
		fmt.Println(multiplication)
		multiplication *= x
	}
}
