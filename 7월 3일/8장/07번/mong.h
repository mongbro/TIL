#pragma once
#include<stdio.h>

int get_tax(int n);
int get_tax(int n)
{
	if (n > 1000)
		return n / 100 * 10;
	else
		return n / 100 * 8;
}