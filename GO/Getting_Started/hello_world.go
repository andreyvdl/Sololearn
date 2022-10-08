package main // Every Golang program has packages, that's why we declare the "main" package;

import "fmt" // Besides declaring packages, we can import them;
// Here we import the "fmt" (format) package;
/*
** We can import many packages like this:
** import(
	"fmt"
	"math"
)
*/

func main() {
	fmt.Println("Hello, World!😵‍💫")
}

/*
** We can comment on Golang just like on Clang;
** We also use "main()" as the start function;
** Functions are declared with "func";
** Golang files have the ".go" extension;
** To compile and run Golang files we use "go run <file_name>";
**
** Each package has exported names that begin with capital letters;
** For example, "Println" is an exported name from the "fmt" package;
** The pattern to use an exported name from another package is:
** "<package_name>.<exported_name>";
** Just like we did with "fmt.Println";
 */
