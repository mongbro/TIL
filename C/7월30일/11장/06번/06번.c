#include<stdio.h>

void arr_copy(int* arr1, int* arr2, int size);

int main() {
	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 }, arr2[10];
	arr_copy(arr1, arr2, 10);
	printf("arr1[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr2[i]);
	}
}

void arr_copy(int* arr1, int* arr2, int size) {
	for (int i = 0; i < size; i++) {
		*(arr2 + i) = *(arr1 + i);
	}
}