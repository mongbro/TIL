#pragma once
#include<stdio.h>

double factorial(int n);
double euler(long long n);
double factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
double euler(long long n)
{
	double result = 1.0;
	for (long long i = 1; i <= n; i++)
	{
		result += 1.0 / factorial(i);
	}
	return result;
}