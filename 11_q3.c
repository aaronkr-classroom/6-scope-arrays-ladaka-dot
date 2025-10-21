#include <stdio.h>

void test() {

	static int data = 0;
	printf("%d,", data++);
}
void main() {
	int i;
	for (i = 0; i < 5; i++)test();
}
