#include<stdio.h>

double square(double a);

int main() {
	double a;

	printf("���� �Է� : ");
	scanf("%lf", &a);
	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", a, square(a));

	return 0;
}

double square(double a) {
	return a * a;
}