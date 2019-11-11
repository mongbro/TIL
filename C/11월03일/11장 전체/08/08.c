#include<stdio.h>
#define SIZE 10

int array_sum(int* a, int size);

int main() {
	int a[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("รัวี : %d\n", array_sum(a, SIZE));
	return 0;
}

int array_sum(int* a, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(a + i);
	}
	return sum;
}