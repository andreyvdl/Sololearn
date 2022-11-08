package main

import "fmt"

/*
** An array in Golang can be defined putting brackets with the size of the array after the variable name;
	var <variable_name> [<size_of_array>]<type_of_array>
** We can also define and initialize the array;
	var <variable_name> = [<size_of_array>]<type_of_array>{<value>, ...}
** Like Clang, Golang has index starting from 0;
** Golang has dynamically-sized view into the elements of an array, using slice;
** A slice is a part of an array in other array;
** the syntax is:
	var <variable_name> []<variable_type> = <array_name>[<start_index>:<end_index>]
** You can ommit the start index or the end index, but not both;
** Ommiting the start index makes you pick the index 0;
** Ommiting the end index makes you pick the length of the array;
** The sliced array just points to the original array, so changing the value will change the original;

** We can use make() to create a slice dynamically;
	var <variable_name> = make([]<variable_type>, <size>)
** Then we use append() to add elements to the slice;
	<variable_name> = append(<variable_name>, <value_to_add>, ...)

** Like in javascript, we ca use a specific word to loop an array;
** the range look has this syntax:
	for <index_variable>, <value_variable> := range <array_name> {
		<do_this_every_time>
	}
** the index and value variables, don't need to be declared before the loop;
** Actually the index variable is optional, you can just add a underline in place;
	for _, <value_variable> := range <array_name> {
		<do_this_every_time>
	}
** Range can also iterate over characters in a string;
** In this case we have to us the famous Clang function fmt.Printf();
** Because fmt.Println() convert characters to integers;
*/

func main() {
	var names [5]string
	var nbrs = [5]int{1, 2, 3, 4, 5}

	names[0] = "John"
	names[1] = "Paul"
	names[2] = "George"
	names[3] = "Ringo"
	names[4] = "Pete"

	for i := 0; i < 5; i++ {
		fmt.Println(nbrs[i], names[i])
	}

	fmt.Println("========================")
	var names2 []string = names[1:4]

	fmt.Println(names2)
	names2[0] = "Rasputin"
	fmt.Println(names2[0], names[1])
	fmt.Println("========================")

	var list = make([]string, 5)
	list = append(list, "apple")
	list = append(list, "banana", "orange", "grape", "kiwi", "mango", "strawberry")
	fmt.Println(list)
	fmt.Println("========================")

	for i, v := range list {
		fmt.Println(i, v)
	}
	for _, c := range names2[2] {
		fmt.Printf("%c \n", c)
	}
}
