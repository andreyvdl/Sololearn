/*
arrays can be used to store multiple values on one variable;
arrays start on 0;
*/

var course1 = "HTML";
var course2 = "CSS";
var course3 = "JS";
var n = 1;

var courses = new Array("HTML", "CSS", "JS");

console.log(course1);
console.log(course2);
console.log(course3);
console.log(courses);

var course2 = courses[0];
courses[1] = "C++";

console.log("\n");
console.log(course2);
console.log(courses);
console.log(courses[10]);