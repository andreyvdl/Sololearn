/*
objects basically are variables with many values;
you can acess the value of a object property by calling the object and the property;
length is a build-in property that counts the characters and return their length;
you can have functions inside your object, they are called method;
*/

var person = {
	name: "João", age: 31, favColor: "verde", height: 1.83
};

console.log("\nNome: " + person.name + "\nIdade: " + person['age'] + "\nCor favorita: " + person['favColor'] + "\nAltura: " + person.height);
console.log("\n" + person.name.length + ", " + person.age.length + ", " + person.favColor.length);
console["log"]("\nconsole.log is a build-in method in javascript");