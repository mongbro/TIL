#include<stdio.h>
#define SIZE 10

void merge(int* a, int* b, int* c, int size);

int main() {
	int a[SIZE] = { 1,3,4,8,9,13,15,16,17,18 };
	int b[SIZE] = { 2,5,6,7,10,11,12,14,19,20 };
	int c[SIZE*2] = { 0 };
	merge(a, b, c, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *(b + i));
	}
	printf("\n");
	for (int i = 0; i < SIZE*2; i++) {
		printf("%d ", *(c + i));
	}
}

void merge(int* a, int* b, int* c, int size) {
	int ac = 0, bc = 0, cc = 0;

	for (int i = 0; i < size; i++) {
		if (*(a + ac) < *(b + bc)) {
			*(c + cc) = *(a + ac);
			ac++, cc++;
		}
		if (*(a + ac) > * (b + bc)) {
			*(c + cc) = *(b + bc);
			bc++, cc++;
		}
	}

	while (ac < size) {
		*(c + cc) = *(a + ac);
		ac++, cc++;
	}
	while (bc <  size) {
		*(c + cc) = *(b + bc);
		bc++, cc++;
	}
}