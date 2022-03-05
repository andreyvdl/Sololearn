/*
for...in loop is intended for iterating over the enumerable keys of an object;
for...of loop creates a loop iterating over itarable objects;
*/

function forIn() {
	let obj = {a: 1, b: 2, c: 3};
	for (let v in obj) {
		console.log(v);
	}
}

function forOf() {
	let list = ["x", "y", "z"];
	for (let val of list) {
		console.log(val);
	}
	for (let ch of "Hello") {
		console.log(ch);
	}
}

forIn();
console.log("-------------");
forOf();

/*
new ways to create functions...
*/

console.log("-------------");
const add = (x, y) => {
	let sum = x + y;
	console.log(sum);
}
add(19, 23);

console.log("-------------");
const greet = x => "Welcome " + x;
console.log(greet("Dave."));

console.log("-------------");
const x = () => console.log("Hi");
x();

const arr = [2, 3, 7, 8];

console.log("-------------");
arr.forEach(v => {
	console.log(v * 2);
});

/*
default values with arrow
*/

console.log("-------------");
const test = (a, b = 3, c = 42) => {
	return a + b + c;
}
console.log(test(5));
