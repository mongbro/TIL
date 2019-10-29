#include<stdio.h>

void is_prime(int n);

int main() {
	for (int i = 1; i <= 100; i++) {
		is_prime(i);
	}
	return 0;
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