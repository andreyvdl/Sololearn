package main

import "fmt"

/*
** In Golang we can use the keyword "defer" to delay the execution of a line until the function reach the end;
** If we have many "defer" they will execute from the end to start, that is because the "defer" is a stack;
** Like Clang, Golang accepts global variables, they just need to be outside of any function;
 */

var x int = 42

func main() {
	defer fmt.Println("And this", x)
	defer fmt.Println("This one :)")
	fmt.Println("This should be printed before...")
}
