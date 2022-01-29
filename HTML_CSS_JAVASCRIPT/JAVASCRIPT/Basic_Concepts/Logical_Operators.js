/*
Logical operators or Boolean operators, checks expression and returns true or false:
"&&" means AND, only true when both are;
"||" means OR, true if one is;
"!" means NOT, true when is false and false when is true... just know that the exemple below should show true;
*/

console.log(!(9 < 7));
/*
Conditional operator or Ternary operator, set a value based on the condition;
You can read it like: "condition ? false value : true value;";
*/

var age = 21;
var isAdult = (age <= 18) ? "Get out kid" : "Okay you can drink";
console.log(isAdult);