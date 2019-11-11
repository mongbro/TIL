#include<stdio.h>
#include<stdlib.h>

void array_fill(int* A, int size);

int main() {
	int A[10] = { 0 };

	array_fill(A, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d ", A[i]);
	}
	return 0;
}

void array_fill(int* A, int size) {
	for (int i = 0; i < size; i++) {
		*(A + i) = rand();
	}
}