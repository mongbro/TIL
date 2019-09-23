#include<stdio.h>
#define SIZE 10

void array_add(int* a, int* b, int* c, int size);
void print(int* a, int size);

int main() {
	int a[SIZE] = { 1,2,3 };
	int b[SIZE] = { 1,4,7 };
	int c[SIZE];

	array_add(a, b, c, SIZE);

	printf("a[] = ");
	print(a, SIZE);
	printf("b[] = ");
	print(b, SIZE);
	printf("c[] = ");
	print(c, SIZE);

	return 0;
}

void array_add(int* a, int* b, int* c, int size) {
	for (int i = 0; i < SIZE; i++) {
		c[i] = a[i] + b[i];
	}
}

void print(int* a, int size) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}