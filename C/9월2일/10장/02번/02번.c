#include<stdio.h>
#include<stdlib.h>

int main() {
	int a[10];
	int max = 0, min = _CRT_INT_MAX;

	for (int i = 0; i < 10; i++) {
		a[i] = rand();
	}

	for (int i = 0; i < 10; i++) {
		if (max <= a[i])
			max = a[i];
		if (min >= a[i])
			min = a[i];
	}

	printf("�ִ밪�� %d\n�ּҰ��� %d", max, min);

	return 0;
}