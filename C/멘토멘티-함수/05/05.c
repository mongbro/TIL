#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int round(double f);

int main() {
	double a;

	printf("입력 : ");
	scanf("%lf", &a);

	printf("반올립한 값은 %d입니다.", round(a));
}

int round(double f) {
	return (int)(f + 0.5);
}