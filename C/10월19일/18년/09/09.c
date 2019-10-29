#include<stdio.h>

int main() {
	int x[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }, y[20], i, size;
	size = sizeof(x) / sizeof(x[0]);
	for (i = 0; i < size; i++) {
		y[size - 1 - i] = x[i];
	}
	for (i = 0; i < size; i++) {
		printf("x[%d] : %d      y[%d] : %d\n", i, x[i], i, y[i]);
	}
	return 0;
}