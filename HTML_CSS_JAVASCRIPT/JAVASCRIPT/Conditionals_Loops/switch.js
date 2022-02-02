/*
switch is basically a big if else if else sequence;
always remember to use break, when is supposed to stop;
default is the default option, just like else is a default in a sequence of ifs;
*/

var day = "FRIDAY";

switch (day) {
	case 1:
		console.log("Is Sunday");
		break;
	case 2:
		console.log("Is Monday");
		break;
	case 3:
		console.log("Is Tuesday");
		break;
	case 4:
		console.log("Is Wednesday");
		break;
	case 5:
		console.log("Is Thursday");
		break;
	case "FRIDAY":
		console.log("Is Friday");
		break;
	default:
		console.log("Is the end of the week... a.k.a.: Saturday");
}