#include<stdio.h>
#define SIZE 5

void print_arr(int arr[SIZE][SIZE]);
void plus_arr(int arr[SIZE][SIZE]);

int main() {
	int arr[SIZE][SIZE] = { 0 };
	int n;
	for (int i = 0; i < SIZE; i++) {
		n = 10;
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] += n;
			n += 10;
		}
	}
	print_arr(arr);
	printf("\n\n");
	plus_arr(arr);
	print_arr(arr);
}

void print_arr(int arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf(" %d ", arr[i][j]);
		}
		printf("\n");
	}
}

void plus_arr(int arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] += 10;
		}
	}
}