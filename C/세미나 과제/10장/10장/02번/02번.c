#include<stdio.h>
#include<stdlib.h>

int main() {
	int a[10], max, min;
	
	for (int i = 0; i < 10; i++) {
		a[i] = rand();
	}

	max = a[0];
	min = a[0];

	for (int i = 1; i < 10; i++) {
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	printf("최대값은 %d\n최소값은 %d", max, min);
}