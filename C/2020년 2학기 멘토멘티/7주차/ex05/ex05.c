#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int n);

int main() {
	int n;
	printf("���� �Է� : ");
	scanf("%d", &n);
	printf("1���� %d������ �� : %d", n, add(n));
}

int add(int n) {
	if (n == 1)
		return 1;
	else {
		return n + add(n - 1);
	}
}