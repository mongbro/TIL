#include<stdio.h>

int drk(int n);

int main() {
	int n[10000];

	for (int i = 0; i < 10000; i++) {
		n[i] = i + 1;
	}

	for (int i = 1; drk(i) <= 11000; i++) {
		for (int j = 0; j < 10000; j++) {
			if (drk(i) == n[j]) {
				n[j] = 0;
				break;
			}
		}
	}

	for (int i = 0; i < 10000; i++) {
		if (n[i] != 0)
			printf("%d ", n[i]);
	}
}

int drk(int n) {
	int m, sum = n;
	while (n >= 10) {
		m = n % 10;
		sum += m;
		n /= 10;
	}
	sum += n;
	return sum;
}