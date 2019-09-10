#pragma once
#include<stdio.h>

void array_copy(int src[][3], int dst[][3]);
void print_array(int a[][3]);

void array_copy(int src[][3], int dst[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			*(*(dst + i) + j) = *(*(src + i) + j);
		}
	}
}

void print_array(int a[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
}