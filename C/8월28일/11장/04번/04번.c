#include<stdio.h>

void array_print(int* a, int size);

int main() {
	int a[10] = { 0 };

	array_print(a, sizeof(a)/sizeof(a[0]));

	return 0;
}

void array_print(int* a, int size) {
	printf("a[] = { ");

	for (int i = 0; i < size; i++) {
		a[i] = i + 1;
		printf("%d ", a[i]);
	}
	printf("}\n");
}