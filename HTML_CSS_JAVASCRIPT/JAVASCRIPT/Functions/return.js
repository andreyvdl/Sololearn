/*
return is a statement that can return a value from a function;
*/

function returningTest(fac) {
	var total = 1;
	if (fac >= 1){
		while(fac != 1) {
			total *= fac;
			fac--;
		}
		return total;
	}
	else {
		total = 1;
		return total;
	}
}

console.log(returningTest(5));
console.log(returningTest(0));
console.log(returningTest(1));