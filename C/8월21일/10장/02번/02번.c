#include<stdio.h>
#include<stdlib.h>

int main() {
	int n[10];
	int max, min;

	for (int i = 0; i < 10; i++) {
		n[i] = rand();
		printf("%d ", n[i]);
	}
	
	max = n[0];
	min = n[0];

	for (int i = 1; i < 10; i++) {
		if (n[i] > max)
			max = n[i];
		if (n[i] < min)
			min = n[i];
	}

	printf("\n최대값은 %d\n최소값은 %d", max, min);
}