#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define PIE 3.141592

double sin_degree(double degree);

int main() {
	for (int i = 0; i <= 180; i+=10) {
		printf("sin(%lf)�� ���� %lf\n", (double)i, sin(i * PIE / 180));
	}

	double d;

	printf("�Է� : ");
	scanf("%lf", &d);

	printf("sin(%lf)�� ���� %lf", d, sin_degree(d));
}

double sin_degree(double degree) {
	return sin(degree * PIE / 180);
}