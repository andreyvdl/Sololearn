package main

import "fmt"

/*
** Golang does not have classes, but it does have structs;
** Structs are similar to Clang structs;
** We can declare structs in some ways:
	<variable_name> := <struct_name>{<field_name>:<value>, ...}
	var <variable_name> <struct_name> = <struct_name>{<field_name>:<value>, ...}
	var <variable_name> <struct_name>{<value>, ...}
	var <variable_name> <struct_name>
	<variable_name>.<field_name> = <value>
** and many more ways (look documentation for more examples);
** We can access a struct field by using the dot operator;
** We can also use pointers to structs;
** To use a pointer to struct we use the & operator, then we have two ways to access the struct fields:
	<pointer_name>.<field_name>
	(*<pointer_name>).<field_name>
** We can also use the & operator to get the address of a struct creating a new struct;
** We can also create methods for structs;
** Just add a special receiver argument to the function definition;
** We can call these methods with the dot operator;
** Isn't obligatory to add a special receiver argument to the function definition, we can just put it in the parameters;
** In case to change data from a struct we ca use a pointer in the method
*/

type Contact struct {
	name  string
	phone int
}

func (x Contact) welcome() {
	fmt.Println(x.name)
	fmt.Println(x.phone)
}

func (ptr *Contact) chng_nm(nw_nm string) {
	ptr.name = nw_nm
}

func main() {
	james := Contact{"James", 123456789}
	var mary Contact = Contact{name: "Mary", phone: 987654321}
	var john Contact
	john.name = "John"
	john.phone = 321654987
	fmt.Println(james, mary.name, john.phone)
	fmt.Println("=====================")

	var p = &mary
	var ptr = &Contact{"Andrey", 789456123}
	fmt.Println(p.name, (*p).phone)
	fmt.Println(ptr.name, (*ptr).phone)
	fmt.Println("=====================")

	john.welcome()
	fmt.Println("=====================")

	james.chng_nm("Bob")
	fmt.Println(james)
}
