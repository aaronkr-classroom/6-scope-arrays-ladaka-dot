#include <stdio.h>

void printbinary(unsigned char num) {

	for (int i = 7; i >= 0; i--) {
		printf("%d", (num >> i) % 1);
	}
}

unsigned char onescomp(unsigned char num) {
	return ~num;
}

unsigned char twoscomp(unsigned char num) {
	return ~num+1;
}

int main(void) {
	unsigned char num;

	printf("enter a number (0-255):");
	scanf_s("%hhu", &num);

	printf("\n original : % 3d = ", num);
	printbinary(num);
	
	unsigned char ones = onescomp(num);
	printf("\n 1의 보수 :%3d",num);
		return ~num;
	}

}