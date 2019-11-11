#include<stdio.h>
#define SIZE 4

void merge(int* a, int* b, int* c, int size);

int main() {
	int a[SIZE] = { 2,5,7,8 };
	int b[SIZE] = { 1,3,4,6 };
	int c[SIZE * 2];
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(b + i));
	}
	printf("\n");
	merge(a, b, c, SIZE);
	for (int i = 0; i < SIZE*2; i++) {
		printf("%d ", *(c + i));
	}
	return 0;
}

void merge(int* a, int* b, int* c, int size) {
	int ac = 0, bc = 0, cc = 0;
	for (int i = 0; i < size; i++) {
		if (*(a + ac) < *(b + bc)) {
			*(c + cc) = *(a + ac);
			cc++, ac++;
		}
		else {
			*(c + cc) = *(b + bc);
			cc++, bc++;
		}
	}
	while (ac < size) {
		*(c + cc) = *(a + ac);
		cc++, ac++;
	}
	while (bc < size) {
		*(c + cc) = *(b + bc);
		cc++, bc++;
	}
}