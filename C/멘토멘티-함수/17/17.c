#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define e 0.000001

int f_equal(double a, double b);
double abs(double a);
double min(double a, double b);

int main() {
	double a, b;

	printf("�Ǽ� �Է� : ");
	scanf("%lf", &a);
	printf("�Ǽ� �Է� : ");
	scanf("%lf", &b);
	if (f_equal(a, b))
		printf("�� ���� �Ǽ��� ���� ����");
	else
		printf("�� ���� �Ǽ��� ���� �ٸ�");
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