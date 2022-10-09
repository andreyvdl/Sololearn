package main
import "fmt"

func main() {
	/*
	** Variables are declared using the "var" keyword;
	** after that a name is given to the variable and its type with the value;
	** We can also omit the type if we gonna initialize the variable with a value;
	** Also we can declare multiple variables in one line and give their values;
	** Golang support short variable declaration, like this:
		"<variable_name> := <value>";
	** Golang supports variables of types:
		float32 = single-precision floating point value;
		float64 = double-precision floating point value;
		string = text value;
		bool = true or false value;
	** Golang features zero values for variables that are declared without values
	** they are:
		0 for numeric types;
		false for the boolean type;
		"" (empty string) for strings;
	**/
	var i int = 8 // variable declared and initialized and with type;
	var j, k = 21, 42 // double variable declaration and initialization w/o type;
	a := 10 // short variable declaration;
	b, c := 20, 30 // double short variable declaration;
	var x float32 = 3.1415 // float32 variable declaration;
	var y string = "Andrey" // string variable declaration;
	var z bool = true // boolean variable declaration;
	var d int // variable of type int declared w/o initialization;
	var e string // variable of type string declared w/o initialization;
	var f bool // variable of type bool declared w/o initialization;

	fmt.Println(i)
	fmt.Println(j)
	fmt.Println(k)
	fmt.Println("=================================")
	fmt.Println(a)
	fmt.Println(b)
	fmt.Println(c)
	fmt.Println("=================================")
	fmt.Println(x)
	fmt.Println(y)
	fmt.Println(z)
	fmt.Println("=================================")
	fmt.Println(d)
	fmt.Println(e)
	fmt.Println(f)
}
