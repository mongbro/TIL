#pragma once
#include<stdio.h>

int power(int base, int raised);

int power(int base, int raised) {
	if (raised == 0)
		return 1;
	else
		return power(base, raised - 1) * base;
}