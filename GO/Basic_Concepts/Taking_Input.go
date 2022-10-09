package main
import "fmt"

func main() {
	/*
	** Like Clang we can use the "fmt" package to take input from the user;
	** "fmt.Scanln()" picks up the input from the user and stores it in the variable;
	** Like Clang we need to call the address of the variable with "&";
	*/
	var input string
	var input2 int

	fmt.Println("Enter a string:")
	fmt.Scanln(&input)
	fmt.Println(input)
	fmt.Println("Enter a number:")
	fmt.Scanln(&input2)
	fmt.Println(input2 * 2)
}