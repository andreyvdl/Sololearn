package main

import "fmt"

/*
** Like Clang we can create functions on Golang;
** Unlike Clang functions can be declared after the main function without prototyping;
** Golang arguments need to be declared like variables are declared: "<variable_name> <variable_type>";
** In Golang we can declare multiple arguments of a function with the same type;
** Unlike Clang were we declare a function return before it's name, in Golang we declare the function return after the arguments;
** In Golang we can return multiple values from a function;
 */

func world() {
	fmt.Println("World")
}

func main() {
	hello()
	world()
	put_str("==============")
	put_str("   lo Andrey :)\rHel")
	elevated_by(6, 2)
	fmt.Println(fifty_percent(42))
	x, y := return_two_values(2, 3)
	fmt.Println(x, y)
}

func hello() {
	fmt.Println("Hello")
}

func put_str(str string) {
	fmt.Println(str)
}

func elevated_by(base, elevated int) {
	var result int

	if base == 0 {
		fmt.Println(0)
	}
	result = 1
	for ; elevated > 0; elevated-- {
		result *= base
	}
	fmt.Println(result)
}

func fifty_percent(nbr int) int {
	var result int

	result = nbr / 2
	return result
}

func return_two_values(x, y int) (int, int) {
	x *= 2
	y *= 3
	return x, y
}
