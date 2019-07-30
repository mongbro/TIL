#include<stdio.h>

void print_arr(int arr[]);
void print_reverse(int arr[], int n);

int main() {
	int arr[] = { 10,20,30,40,50 };

	print_arr(arr);
	printf("\n\n");
	print_reverse(arr, 5);
}

void print_arr(int arr[]) {
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
}

void print_reverse(int arr[], int n) {
	int* p = &arr[0] + 5 - 1;		//int* p = &arr[0] + 5 - 1  =  int* p = arr + 5 - 1
									//********�迭 �̸��� �迭�� ù��° �ּҸ� ��Ÿ����!!!!!!******
	while (p >= arr) {
		printf("%d ", *p--);
	}
}