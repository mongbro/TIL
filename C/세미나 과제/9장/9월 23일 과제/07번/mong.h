#pragma once
#include<stdio.h>

void show_digit(int n);

void show_digit(int n) {
	if (n < 10)
		printf("%d ", n);
	else {
		show_digit(n / 10);
		show_digit(n % 10);
	}
}