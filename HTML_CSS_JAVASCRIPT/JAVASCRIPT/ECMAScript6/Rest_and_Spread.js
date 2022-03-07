/*
the "...nums" is a rest parameter the 3 dots are called spread operator;
we can use add as many parameters to a function, but only the last parameter can be a rest;
*/

function containsAll(arr, ...nums) {
	for (let num of nums) {
		if (arr.indexOf(num) === -1) {
			return false;
		}
	}
	return true;
}

var x = [2, 4, 6, 7];

console.log(containsAll(x, 2, 4, 7));
console.log(containsAll(x, 6, 4, 9));

/*
spread operator is similar to the rest but has other purpose;
in the e.g. it will fill the parameter with the array;
*/

const myFunction = (w, x, y, z) => {
	console.log(w + x + y + z);
}
let args = [1, 2, 3];
myFunction(...args, 4);

const obj1 = {foo: 'bar', x: 42};
const obj2 = {foo: 'baz', y: 5};

const merge = (...objects) => ({...objects});
let mergedObj = merge(obj1, obj2);
console.log(mergedObj);
let mergedObj2 = merge({}, obj1, obj2);
console.log(mergedObj2);