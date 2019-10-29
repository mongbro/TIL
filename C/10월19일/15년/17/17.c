#include<stdio.h>

int main() {
	int arr[10];
	int i, min, max;
	for (i = 0; i < 10; i++) {
		printf("ют╥б : ");
		scanf("%d", &arr[i]);
	}
	min = max = arr[0];
	for (i = 1; i < 10; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("max : %d      min : %d", max, min);
	return 0;
}