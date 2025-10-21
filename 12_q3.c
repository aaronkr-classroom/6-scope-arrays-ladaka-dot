#include <stdio.h>

void main(void) {

	char data[3][4] =
	{ 0,0,0,0,
	0,0,0,0,
	0,0,0,0 };

	data[1][1] = 1;
	data[2][3] = 2;



	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}

	return;
}

