#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rand_num;

void gamelnit(void) {
	srand(time(0));
	rand_num = rand() % 10 + 1;
}


void gameplay(void) {

	int guess = 0, count = 0, allowed = 5;

	printf("guess the number (1-10):");

do {
	scanf_s("%d", &guess);
	count++;

	if (guess == rand_num) {

		printf("정답");
		break;
	}
		else if (guess < rand_num) {
			printf("low");
		}
		else if (guess > rand_num) {
			printf("high");
	}


		}while (count != allowed);

int main(void); {
	gamelnit();
	gameplay();

	return 0;

}



}