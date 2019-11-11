#include<stdio.h>
#define SIZE 10

void array_add(int* a, int* b, int* c, int size);

int main() {
	int a[SIZE] = { 1,2,3,4,5,6,7,8,9,0 };
	int b[SIZE] = { 1,1,1,1,1,1,1,1,1,1 };
	int c[SIZE];
	array_add(a, b, c, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(c + i));
	}
	return 0;
}

void array_add(int* a, int* b, int* c, int size) {
	for (int i = 0; i < size; i++) {
		*(c + i) = *(a + i) + *(b + i);
	}
}