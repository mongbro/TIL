#include<stdio.h>
#include"mong.h"
#define SIZE 10

int main() {
	int a[SIZE] = { 1,2,3 };
	int b[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", b[i]);
	}
	printf("\n");
	if (array_equal(a, b, SIZE) == 1)
		printf("2개의 배열은 같음");
	else
		printf("2개의 배열은 다름");

}