#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int factorial(int n);

int main() {
	int n;
	double e = 1;
	printf("어디까지 계산할까요 : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		e += 1.0 / factorial(i);
	}
	printf("오일러의 수는 %lf입니다.", e);
}

int factorial(int n) {
	long long a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}