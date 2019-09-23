#pragma once
#include<stdio.h>

int is_multiply(int a, int b);
int is_multiply(int a, int b)
{
	if (a%b == 0)
		return 1;
	else
		return 2;
}