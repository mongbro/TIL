#include<stdio.h>
#define SIZE 10

int search(int* a, int size, int search_value);

int main() {
	int a[SIZE] = { 100,120,140,160,180,200,220,240,260,280 };
	printf("%d", search(a, SIZE, 200));
	return 0;
}

int search(int* a, int size, int search_value) {
	int value=11;
	for (int i = 0; i < size; i++) {
		if (search_value == *(a + i))
			value = i;
	}
	return value;
}