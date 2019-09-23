#include<stdio.h>
#define SIZE 10

void array_copy(int* a, int* b, int size);
void print(int* a, int size);

int main() {
	int a[SIZE] = { 1,2,3 };
	int b[SIZE];

	array_copy(a, b, SIZE);

	printf("a[] = ");
	print(a, SIZE);

	printf("b[] = ");
	print(b, SIZE);

	return 0;
}

void array_copy(int* a, int* b, int size) {
	for (int i = 0; i < SIZE; i++) {
		b[i] = a[i];
	}
}

void print(int* a, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}