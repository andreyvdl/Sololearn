package main

import "fmt"

/*
** Maps are pairs of keys and values;
** The keys are the index of the map and every key has to have a value;
** Every key is unique for obvious reasons;
** We can use the make function to create a map;
** We can declare the content of the map after creating it or on the same line;
** The syntax is:
	<variable_name> = make(map[<key_type>]<value_type>)
	<variable_name> = map[<key_type>]<value_type>{
		<key>: <value>,
		...}
** We can use delete() function do delete a key from the map;
** The syntax is:
	delete(<map_name>, <key>)
*/

func main() {
	var m = make(map[string]int)
	var m2 = map[string]int{
		"key1": 1,
		"key2": 2}

	m["James"] = 42
	m["Amy"] = 24
	fmt.Println(m["James"])
	fmt.Println(m2["key2"])
	fmt.Println("==============")

	delete(m, "James")
	m["Bob"] = 8
	fmt.Println(m, m2)
}
