#include<stdio.h>
#define SIZE 10

void convert(double* grade, double* scores, int size);
void print(double* a, int size);

int main() {
	double grade[SIZE] = { 00.00, 00.50, 01.00, 01.50, 02.00, 02.50, 03.00, 03.50, 04.00, 04.30 };
	double scores[SIZE];

	convert(grade, scores, SIZE);

	print(grade, SIZE);
	print(scores, SIZE);

	return 0;
}

void convert(double* grade, double* scores, int size) {
	for (int i = 0; i < size; i++) {
		scores[i] = 100 * grade[i] / 4.3;
	}
}

void print(double* a, int size) {
	for (int i = 0; i < size; i++) {
		printf("%5.2lf   ", a[i]);
	}
	printf("\n");
}