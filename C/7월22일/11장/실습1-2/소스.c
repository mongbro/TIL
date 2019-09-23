#include<stdio.h>
#define SIZE 5

void print_arr(int arr[][SIZE]);
void plus_arr(int arr[][SIZE]);

int main() {
	int arr[SIZE][SIZE];
	int n;
	for (int i = 0; i < SIZE; i++) {
		n = 0;
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = n + 10;
			n += 10;
		}
	}
	print_arr(arr);
	printf("\n\n");
	plus_arr(arr);
	print_arr(arr);
}

void print_arr(int arr[][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf(" %d ", arr[i][j]);
		}
		printf("\n");
	}
}

void plus_arr(int arr[][SIZE]) {
	int* p = &arr[0][0];
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			*p += 10;
			p++;
		}
	}
}