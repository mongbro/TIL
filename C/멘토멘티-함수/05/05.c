#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int round(double f);

int main() {
	double a;

	printf("�Է� : ");
	scanf("%lf", &a);

	printf("�ݿø��� ���� %d�Դϴ�.", round(a));
}

int round(double f) {
	return (int)(f + 0.5);
}