#include <stdio.h>

#define NUM_STDS 3
#define NUM_GRADES 4

float calcavg(int data[]) {
	int sum = 0;
	for (int i = 0; i < NUM_GRADES; i++) {
		sum += data[i];
	}
	return sum / (float)NUM_GRADES;
}

int main(void) {
	int grades[NUM_STDS][NUM_GRADES] = {
		{85,45,70,93},
		{74,86,93,45},
		{67,37,99,97}
	};

	printf("student grades\n");
	for (int i = 0; i < NUM_STDS; i++) {

		printf("student %d:", i + 1);
		for (int j = 0; j < NUM_GRADES; j++) {
			printf("%d", grades[i][j]);
		}
		printf("average:%.2f\n", calcavg(grades[i]));
	}
	return 0;
}