window.onload = function() {
	let btn = document.getElementById("jump");
	let count = 0;
	let	canvas = document.getElementById("canvas");
	let	context = canvas.getContext("2d");
	let	x = 300;
	let	y = 350;

	btn.onclick = function() {
		count += 1;
		y -= 25;
		context.clearRect(0, 0, 600, 400);
		context.beginPath();
		context.art(x, y, 50, 0, 2 * Math.PI);
		context.fillStyle = "red";
		context.fill();
		context.font = '25px Arial';
		context.fillStyle = 'white';
		context.fillText("Count: " + count, 10, 30);
	}

	context.arc(x, y, 50, 0, 2 * Math.PI);
	context.fillStyle = "red";
	context.fill();
}