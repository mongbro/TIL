#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int factorial(int n);

int main() {
	int n;
	double e = 1;
	printf("������ ����ұ�� : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		e += 1.0 / factorial(i);
	}
	printf("���Ϸ��� ���� %lf�Դϴ�.", e);
}

int factorial(int n) {
	long long a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}