#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PIE 3.141592

double area(double r);

int main() {
	double r;

	printf("�Է� : ");
	scanf("%lf", &r);

	printf("���� ������ %lf�Դϴ�.", area(r));
}

double area(double r) {
	return PIE * r * r;
}