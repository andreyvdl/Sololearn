/*
variables can be objects and contain properties, these properties then become methods;
computed property names let us create certain objects based on user data, like id, email...
*/

let tree = {
	height: 10,
	color: 'green',
	grow() {
		this.height += 2;
	}
};

tree.grow();
console.log(tree.height);
console.log('-----------');

var param = 'size';
var config = {
	[param]: 12,
	['mobile' + param.charAt(0).toUpperCase() + param.slice(1)]: 4
};
console.log(config.mobileSize);

/*
object.assing() can be used to combine multiple sources on one object;
*/

let person = {
	name: 'Jack',
	age: 18,
	sex: 'male'
};

let student = {
	name: 'bob',
	age: 20,
	xp: '2'
};

let newStudent = Object.assign({}, person, student);

let newPerson = Object.assign({}, person);
newPerson.name = 'Bob';

console.log('-----------');
console.log(person.name);
console.log(newPerson.name);