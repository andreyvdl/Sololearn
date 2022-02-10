/*
methods are functions inside of objects;
*/

function pessoa(name, age) {
	this.name = name;
	this.age = age;
	this.changeName = function (name) {
		this.name = name;
	}
	this.yearOfBirth = bornYear;
}
function bornYear() {
	return 2022 - this.age;
}

var Jao = new pessoa("João", 42);
console.log(Jao.name);
Jao.changeName("Jonas");
console.log(Jao.name);
console.log(Jao.yearOfBirth());