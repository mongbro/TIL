#include<stdio.h>
#define SIZE 10

void array_copy(int a[], int b[], int size);		//복사, 출력하는 함수

int main() {
	int arr1[SIZE] = { 1,2,3 };
	int arr2[SIZE];
	array_copy(arr1, arr2, SIZE);
}

void array_copy(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
}