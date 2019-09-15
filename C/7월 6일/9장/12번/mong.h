#pragma once
#include<stdio.h>

void f_fibo(int n);
int fibo(int n);
int fibo(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibo(n - 2) + fibo(n - 1);
}
void f_fibo(int n)
{
	int r = 0;
	while (r <= n)
	{
		printf("fib(%d) = %d\n", r, fibo(r));
		r++;
	}
}