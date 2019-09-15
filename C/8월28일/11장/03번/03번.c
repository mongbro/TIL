#include<stdio.h>
#include<stdlib.h>

void array_fill(int* a, int size);

int main() {
	int a[10];

	array_fill(a, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d  ", a[i]);
	}

	return 0;
}

void array_fill(int* a, int size) {
	for (int i = 0; i < size; i++) {
		a[i] = rand();
	}
}