/*
Classes can be used to create multiple objects;
using the keyword "new" we can create new objects calling the class;
We can also add methods declaring they on the class;
"static methods" are used to create utility functions to an application;
"extends" is a keyword used to create child objects, they inherits properties and methods of the parent;
"super" keyword is used to call parent methods;
*/

class Rectangle {
	constructor (height, width){
		this.height = height;
		this.width = width;
	}
	get area(){
		return this.calcArea();
	}
	calcArea(){
		return this.height + this.width;
	}
}
const square = new Rectangle (5,5);
console.log("square area: " + square.area);
const poster = new Rectangle (2,3);

class Point {
	constructor (x, y){
		this.x = x;
		this.y = y;
	}
	static distance(a,b){
		const dx = a.x - b.x;
		const dy = a.y - b.y;
		return Math.hypot(dx,dy); 
	}
}
const p1 = new Point(7,2);
const p2 = new Point(3,8);
console.log("point distance: " + Point.distance(p1,p2));

class Animal {
	constructor(name){
		this.name = name;
	}
	speak(){
		console.log(this.name + ' makes a noise.');
	}
}
class Dog extends Animal {
	speak() {super.speak();
		console.log(this.name + ' barks.');
	}
}
let dog = new Dog('Rex');
dog.speak();