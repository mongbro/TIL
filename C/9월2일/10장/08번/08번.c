#include<stdio.h>
#include<math.h>

int main() {
	double a[10];
	double sum = 0, avg, beforevar, var;

	for (int i = 0; i < 10; i++) {
		printf("입력 %2d : ", i + 1);
		scanf("%lf", &a[i]);
		sum += a[i];
	}

	avg = sum / 10;
	sum = 0;

	for (int i = 0; i < 10; i++) {
		sum += (a[i] - avg) * (a[i] - avg);
	}

	beforevar = sum / 10;
	var = sqrt(beforevar, 2);
	
	printf("평균 : %lf\n표준편차 %lf", avg, var);

	return 0;
}