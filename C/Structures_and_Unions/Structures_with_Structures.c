#include <stdio.h>

typedef struct {
	int x;
	int y;
} point;

typedef struct {
	float radius;
	point center;
} circle;

int main() {
	circle c = {4.5, {1, 3}};

	printf("%3.1f %d,%d", c.radius, c.center.x, c.center.y);

	return 0;
}

/*
 * In the e.g. above we can see that the struct "circle" is calling the struct "point".
 * You can also notice that the "c" variable has two curly braces, because of the struct calling other struct.
 * Also notice that the "printf" second and third parameter has two ".", again because of the struct calling other struct.
*/