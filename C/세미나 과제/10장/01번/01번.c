#include<stdio.h>

double square(double a);

int main() {
	double a;

	printf("정수 입력 : ");
	scanf("%lf", &a);
	printf("주어진 정수 %lf의 제곱은 %lf입니다.", a, square(a));

	return 0;
}

double square(double a) {
	return a * a;
}