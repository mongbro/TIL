#pragma once
#include<stdio.h>

void set_proverb(char** q, int n);

void set_proverb(char** q, int n) {
	char* a[10] = {
		"01. aaaaaaaaaaa",
		"02. aaaaaaaaaaa",
		"03. aaaaaaaaaaa",
		"04. aaaaaaaaaaa",
		"05. aaaaaaaaaaa",
		"06. aaaaaaaaaaa",
		"07. aaaaaaaaaaa",
		"08. aaaaaaaaaaa",
		"09. aaaaaaaaaaa",
		"10. aaaaaaaaaaa",
	};

	*q = a[n];
}