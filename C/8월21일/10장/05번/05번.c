#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main() {
	int a[SIZE];
	int count[10] = { 0 };
	int max, num;
	
	for (int i = 0; i < SIZE; i++) {
		a[i] = rand() % 10;
		count[a[i]]++;
		printf("%d ", a[i]);
	}

	printf("\n");
	max = count[0];

	for (int i = 1; i < 10; i++) {
		if (count[i] > max) {
			max = count[i];
			num = i;
		}
	}
	printf("%d가 %d회로 가장 많이 나옴", num, count[num]);
}