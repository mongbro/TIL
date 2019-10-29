#include<stdio.h>

int array_equal(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}