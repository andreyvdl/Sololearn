window.onload = function() {
	let btn = document.getElementById("jump");
	let count = 0;
	let	canvas = document.getElementById("canvas");
	let	context = canvas.getContext("2d");
	let	x = 300;
	let	y = 350;
	let	t = Date.now();
	let	speed = 25;

	document.ontouchstart = function() {
		count += 1;
		y -= 25;
		speed = 25;
	}

	document.onmousedown = function() {
		count += 1;
		y -= 25;
		speed = 25;
	}

	function draw() {
		let	time_passed = (Date.now() - t) / 1000;

		t = Date.now();
		if (y <= 350) {
			speed += 50 * time_passed;
			y += speed * time_passed;
		}
		if (y > 350) {
			count = 0;
		}
		context.clearRect(0, 0, 600, 400);
		context.beginPath();
		context.arc(x, y, 50, 0, 2 * Math.PI);
		context.fillStyle = "red";
		context.fill();
		context.font = '25px Arial';
		context.fillStyle = 'white';
		context.fillText("Count: " + count, 10, 30);
		window.requestAnimationFrame(draw);
	}

	context.arc(x, y, 50, 0, 2 * Math.PI);
	context.fillStyle = "red";
	context.fill();
	draw();
}