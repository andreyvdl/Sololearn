#include <stdio.h>

int	main(){
	const double PI = 3.14; //The "const" before the variable says that: "The variable has this value until the end of the program, it can't be changed".
	printf("%f", PI);

	return 0;
}

/*You can also declare a const outside of the function:

#include <stdio.h>

#define PI 3.14 //Here you are saying that: "The variable PI will be equal to 3.14 until the end of the program and it can't be changed".

int	main(){
	printf("%f", PI);
	return 0;
}*/