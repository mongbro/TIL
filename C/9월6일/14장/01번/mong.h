#pragma once
#include<stdio.h>

void set_proverb(char** q, int n);

void set_proverb(char** q, int n) {
	char* a[10] = {
		"1. aaaaaaaaaaaa",
		"2. aaaaaaaaaaaa",
		"3. aaaaaaaaaaaa",
		"4. aaaaaaaaaaaa",
		"5. aaaaaaaaaaaa",
		"6. aaaaaaaaaaaa",
		"7. aaaaaaaaaaaa",
		"8. aaaaaaaaaaaa",
		"9. aaaaaaaaaaaa",
		"10. aaaaaaaaaaaa",
	};

	*q = a[n];
}