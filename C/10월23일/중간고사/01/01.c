#include<stdio.h>

void print(int);

int main() {
	print(5);
	return 0;
}

void print(int n) {
	if (n == 1)
		printf("%d ", n);
	else {
		print(n - 1);
		printf("%d ", n);
	}
}