/*
functions are called, will receive a input (or not) while being called and run a code with that input;
there are some functions like console.log, alert, document.write, but the user can create their own functions;
you can reused very times;
*/

function countToTen() {
	var n = 0;
	while (n <= 10) {
		console.log(n);
		n++;
	}
}

countToTen();
//Calling again :)
countToTen();
