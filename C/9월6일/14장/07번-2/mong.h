#pragma once
#include<stdio.h>

void change(unsigned char a[][10]);

void change(unsigned char a[][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (*(*(a + i) + j) < 128)
				* (*(a + i) + j) = 0;
			if (*(*(a + i) + j) >= 128)
				* (*(a + i) + j) = 255;
			printf("%3d ", *(*(a + i) + j));
		}
		printf("\n");
	}
}