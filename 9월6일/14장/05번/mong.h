#pragma once
#include<stdio.h>

void set_max_ptr(int m[], int size, int** pmax);

void set_max_ptr(int m[], int size, int** pmax) {
	*pmax = m[0];

	for (int i = 1; i < size; i++) {
		if (*pmax < m[i])
			* pmax = m[i];
	}

	printf("가장 큰 값은 %d", *pmax);
}