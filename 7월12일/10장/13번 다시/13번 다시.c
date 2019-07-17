#include<stdio.h>
#define SIZE 32

int main() {
	int binary[SIZE], n, count = 0;
	printf("ют╥б : ");
	scanf_s("%d", &n);
	printf("%d => ", n);
	for (int i = 0; i < SIZE && n > 0; i++) {
		binary[i] = n % 2;
		n /= 2;
		count++;
	}
	for (int i = count - 1; i >= 0; i--) {
		printf("%d", binary[i]);
	}
	return 0;
}