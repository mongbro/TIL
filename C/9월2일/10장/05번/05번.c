#include<stdio.h>
#include<stdlib.h>

int main() {
	int a[100];
	int c[10] = { 0 };
	int max, max_value;

	for (int i = 0; i < 100; i++) {
		a[i] = rand() % 10;
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 10; j++) {
			if (a[i] == j)
				c[j]++;
		}
	}
	
	max = c[0];

	for (int i = 1; i < 10; i++) {
		printf("%d ", c[i]);
		if (max < c[i]) {
			max = c[i];
			max_value = i;
		}
	}

	printf("\n가장 많이 나온 수 : %d", max_value);

	return 0;
}