#pragma once
#include<stdio.h>

int f_count(int n);

int f_count(int n)
{
	static int count = 0;
	if (n > 0)
	{
		count++;
		return f_count(n / 10);
	}
	else
		return count;
}