/*
break is a keyword to make the loop stop;
continue is a keyword to make the loop skip one of its iteration;
*/

var oranges = 1;
var apples = 1;

for (; oranges <= 20; oranges++) {
	if (oranges == 10) {
		break;
	}
	else if (oranges == 1) {
		console.log(oranges + " Orange.");
	}
	else {
		console.log(oranges + " Oranges.");
	}
}

for (; apples <= 20; apples++) {
	if((apples % 2) != 0) {
		continue;
	}
	console.log(apples + " Apples.");
}