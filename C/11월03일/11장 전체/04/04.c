#include<stdio.h>
#define SIZE 10

void array_print(int* a, int size);

int main() {
	int a[SIZE] = { 1,2,3,4,5 };
	array_print(a, SIZE);
	return 0;
}

void array_print(int* a, int size) {
	printf("a[]={ ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *(a + i));
	}
	printf("}");
}