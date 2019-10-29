#pragma once
#include<stdio.h>

double add(double a);

double add(double a) {
	if (a == 1)
		return 1;
	else
		return 1/a + add(a - 1);
}