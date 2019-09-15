#pragma once
#include<stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}
int absolute(int n)
{
	if (n >= 0)
		return n;
	else
		return -n;
}
int sign(int n)
{
	if (n > 0)
		return 1;
	else if (n < 0)
		return -1;
	else
		return 0;
}