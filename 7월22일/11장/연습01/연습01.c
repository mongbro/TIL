#include<stdio.h>

void print_arr(int* arr, int size);
void print_reverse(int* arr, int size);

int main() {
	int arr[] = { 10,20,30,40,50 };
	int size = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, size);
	printf("\n\n");
	print_reverse(arr, size);
	return 0;
}

void print_arr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", *(arr + i));
	}
}
///////*********** 모르겠다 나중에 하자 *******************///////
void print_reverse(int* arr, int size) {
	int n[5], a= *(arr + size - 1);
	for (int i = 0; i < size; i++) {
		n[i] = a;
		a--;
	}
	int* p = n;
	while (*p >= *arr) {
		printf("%d ", *p--);
	}
}