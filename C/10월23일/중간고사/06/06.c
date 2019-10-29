#include<stdio.h>
#define N_DATA 10

int array_equal(int a[], int b[], int size);

int main() {
	int a[N_DATA] = { 1,2,3 };
	int b[N_DATA] = { 0 };
	printf("%d\n", array_equal(a, b, N_DATA));
	return 0;
}

int array_equal(int a[], int b[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}