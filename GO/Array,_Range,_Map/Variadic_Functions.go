package main

import "fmt"

/*
** Variadic functions are functions that can take any number of arguments;
** Like in Clang we can use 3 dots to represent a variadic function;
** The syntax is:
	<function_name>(<argument_name> ...<type>)
** We can also use an array as an argument;
** The syntax is:
	<function_name>(<argument_name>... )
** Without the 3 dots the array is considered as a single argument;
*/

func sum(nums ...int) {
	total := 0
	for _, v := range nums {
		total += v
	}
	fmt.Println(total)
}

func main() {
	var arr = []int{1, 2, 3, 4, 5}

	sum(1, 2, 3, 4, 5)
	sum(1, 2, 3)
	sum(arr...)
}
