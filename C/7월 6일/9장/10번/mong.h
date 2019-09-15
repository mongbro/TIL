#pragma once
#include<stdio.h>

double sum(double r);

double sum(double r)
{
	if (r == 1)
		return 1 / r;
	else
		return 1 / r + sum(r - 1);
}