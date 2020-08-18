#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define e 0.000001

int f_equal(double a, double b);
double abs(double a);
double min(double a, double b);

int main() {
	double a, b;

	printf("실수 입력 : ");
	scanf("%lf", &a);
	printf("실수 입력 : ");
	scanf("%lf", &b);
	if (f_equal(a, b))
		printf("두 개의 실수를 서로 같음");
	else
		printf("두 개의 실수를 서로 다름");
}

int f_equal(double a, double b) {
	if (abs(a - b) / min(abs(a), abs(b)) < e)
		return 1;
	else
		return 0;
}

double abs(double a) {
	if (a < 0)
		return -a;
	else
		return a;
}

double min(double a, double b) {
	if (a > b)
		return b;
	else
		return a;
}