package main
import "fmt"

func main() {
	/*
	** We can change the value of variables that already have been declared;
	** We can also declare constants using the "const" keyword;
	** constant variables can't be changed;
	** constants can't be declared as short variables;
	*/
	var x = 21
	const pi = 3.1415

	x = 42
	//pi = 3.142 // this will cause an error;
	fmt.Println(x)
	fmt.Println(pi)
}