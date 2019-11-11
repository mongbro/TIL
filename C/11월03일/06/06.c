#include<stdio.h>
#define SIZE 10

void array_copy(int* a, int* b, int size);

int main() {
	int a[SIZE] = { 1,2,3 };
	int b[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(b + i));
	}
	
	array_copy(a, b, SIZE);

	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(b + i));
	}
}

void array_copy(int* a, int* b, int size) {
	for (int i = 0; i < size; i++) {
		*(b + i) = *(a + i);
	}
}