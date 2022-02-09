/*
we can make an object contructor by using a function;
this.propertyName will tell that this functionName will be the object of this property;
new keyword will create new objects;
*/

function people(name, age, color) {
	this.name = name;
	this.age = age;
	this.favColor = color;
}

var p1 = new people("João", 42, "verde");
var p2 = new people("Amelia", 21, "vermelho");

console.log(p1.age);
console.log(p2.name);