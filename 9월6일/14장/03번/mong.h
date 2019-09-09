#pragma once
#include<stdio.h>

double get_average(int list[], int n);

double get_average(int list[], int n) {
	double sum = 0;

	for (int i = 0; i < n; i++) {
		sum += list[i];
	}
	return sum / n;
}