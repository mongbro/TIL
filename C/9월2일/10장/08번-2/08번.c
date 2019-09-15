#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int b[10];
	double a[10];
	double sum = 0, avg, var;

	for (int i = 0; i < 10; i++) {
		b[i] = rand() % 101;
		a[i] = b[i];
		sum += a[i];
	}

	avg = sum / 10;
	sum = 0;

	for (int i = 0; i < 10; i++) {
		sum += (a[i] - avg) * (a[i] - avg);
	}

	sum /= 10;
	var = sqrt(sum, 2);

	printf("평균 : %lf\n표준편차 : %lf", avg, var);

	return 0;
}