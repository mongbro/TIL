#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_reverse(int a[], int n);
void print_reverse2(int* a, int* b, int* c, int n);

int main() {
	int a[3] = { 10,20,30 };
	int b = 0, c = 1, d = 2;
	print_reverse(a, 3);

	printf("\n");
	printf("%d %d %d", b, c, d);
	printf("\n");
	print_reverse2(&b, &c, &d, 3);
}

void print_reverse(int a[], int n) {
	int* p = a + n - 1;
	for (int i = 0; i < n; i++) {
		printf("%d ", *p--);
	}
}

void print_reverse2(int* a, int* b, int* c, int n) {
	(*a) += 3;
	(*b) += 3;
	(*c) += 3;
	printf("%d ", *a);
	printf("%d ", *b);
	printf("%d ", *c);
}