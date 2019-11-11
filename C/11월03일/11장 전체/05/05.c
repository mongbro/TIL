#include<stdio.h>
#define SIZE 10

void convert(double* grades, double* scores, int size);

int main() {
	double grades[SIZE] = { 0, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.3 };
	double scores[SIZE];
	convert(grades, scores, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%6.2lf ", *(grades + i));
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%6.2lf ", *(scores + i));
	}
	return 0;
}

void convert(double* grades, double* scores, int size) {
	for (int i = 0; i < size; i++) {
		*(scores + i) = *(grades + i) / 4.3 * 100;
	}
}