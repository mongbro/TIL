#include<stdio.h>

void swap(int a, int b);

int main() {
	int a = 10, b = 20;
	printf("%d %d", a, b);
	swap(a, b);
	printf("\n\n");
	printf("%d %d", a, b);
}

void swap(int a, int b) {
	int n;
	n = a;
	a = b;
	b = n;
}