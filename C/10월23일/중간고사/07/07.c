#include<stdio.h>
#include<stdlib.h>

int main() {
	int list[10];
	int i, max, min;

	for (i = 0; i < 10; i++) {
		list[i] = rand();
		printf("%d  ", list[i]);
	}
	max = list[0], min = list[0];
	for (i = 1; i < 10; i++) {
		if (max < list[i])
			max = list[i];
		if (min > list[i])
			min = list[i];
	}
	printf("max : %d\n", max);
	printf("min : %d", min);
	return 0;
}