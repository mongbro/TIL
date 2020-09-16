#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int n);

int main() {
	int n;
	printf("정수 입력 : ");
	scanf("%d", &n);
	printf("1부터 %d까지의 합 : %d", n, add(n));
}

int add(int n) {
	if (n == 1)
		return 1;
	else {
		return n + add(n - 1);
	}
}