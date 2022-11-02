package main

import "fmt"

/*
** In Golang, we declare pointer putting a "*" before the variable type;
** To put a value in a pointer, we call the address of the variable with "&";
** When we change the value of a pointer, we change the value of the variable that the pointer is pointing to;
** We can only change the value of a pointer on other function if we pass the address of the variable that the pointer is pointing to;
** Or if we pass the pointer itself;
 */

func main() {
	var a *int
	var x int

	x = 42
	a = &x
	fmt.Println("address of x:", &x)
	fmt.Println("address of a:", a)
	fmt.Println("value of x:", x)
	fmt.Println("value of a:", *a)
	*a = 21
	fmt.Println("new value of a:", *a)
	fmt.Println("new value of x:", x)
	fmt.Println("=====================================")
	change(&x)
	fmt.Println("new value of x:", x)
	change(a)
	fmt.Println("new value of a:", *a)
}

func change(ptr *int) {
	if *ptr >= 42 {
		*ptr /= 10
	} else {
		*ptr = 42
	}
}
