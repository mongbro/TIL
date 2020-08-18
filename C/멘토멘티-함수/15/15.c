#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void is_prime(int n);

int main() {
	for (int i = 2; i < 100; i++) {
		is_prime(i);
	}
}

void is_prime(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			count++;
	}
	if (count == 2)
		printf("%d ", n);
}