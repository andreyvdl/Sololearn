/*
In ES6 we have more ways to declare variables;
using const and let;
let create variables limited to the block scope;
const create an immutable variable to the block scope;
*/

function varTest() {
	var x = 1;
	if (true) {
		var x = 2;
		console.log(x);
	}
	console.log(x);
}

function letTest() {
	let x = 1;
	if (true) {
		let x = 2;
		console.log(x);
	}
	console.log(x);
}

varTest();
letTest();

const z = true;
console.log(z);
z = false;
console.log(z);