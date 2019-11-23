#include<stdio.h>
#define SIZE 6

int get_sum(int a[], int size);

int main() {
	int a[3][SIZE];
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < SIZE; j++) {
			a[i][j] = 10;
		}
	}
	for (int i = 0; i < 3; i++) {
		sum += get_sum(a, SIZE);
	}
	printf("%d", sum);
}

int get_sum(int a[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	return sum;
}