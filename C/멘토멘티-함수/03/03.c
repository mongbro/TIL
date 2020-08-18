#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PIE 3.141592

double area(double r);

int main() {
	double r;

	printf("입력 : ");
	scanf("%lf", &r);

	printf("원의 면적은 %lf입니다.", area(r));
}

double area(double r) {
	return PIE * r * r;
}