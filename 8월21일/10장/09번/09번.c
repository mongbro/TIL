#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[3][10];
	int min, max;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = rand() % 101;
		}
	}
	for (int i = 0; i < 3; i++) {
		min = arr[i][0];
		max = arr[i][0];
		for (int j = 1; j < 10; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
			if (min > arr[i][j]) {
				min = arr[i][j];
			}
		}
		printf("시험 #%d의 최대점수 : %d\n", i, max);
		printf("시험 #%d의 최저점수 : %d\n\n", i, min);
	}
	return 0;
}