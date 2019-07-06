#pragma once
#include<stdio.h>

int f_sum(int n);

int f_sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n % 10 + f_sum(n / 10);
}