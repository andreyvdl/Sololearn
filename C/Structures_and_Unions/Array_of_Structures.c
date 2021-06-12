#include <stdio.h>

typedef struct {
	int h;
	int w;
	int l;
} box;

int main() {
	box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
	int k, volume;

	for (k = 0; k < 3; k++) {
		volume = boxes[k].h * boxes[k].w * boxes[k].l;
		printf("box %d volume %d\n", k, volume);
	}
	return 0;
}

/*
 * In the e.g. above the array works as a form to replicate 3 "box" structures, but only on one.
*/