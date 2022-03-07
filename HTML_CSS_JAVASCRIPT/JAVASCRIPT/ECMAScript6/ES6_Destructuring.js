/*
destructuring syntax let us destruct an array;
you can also change the variable names;
*/

let arr = ['1', '2', '3'];
let [one, two, three] = arr;

console.log(one);
console.log(two);
console.log(three);

let {a, b} = {a: 'Hello ', b: 'Jack'};
console.log(a + b);

var o = {h: 42, s: true};
var {h: foo, s: bar} = o;

console.log(h);
console.log(foo);

console.log("YES, THE ERROR IS INTENTIONAL!");