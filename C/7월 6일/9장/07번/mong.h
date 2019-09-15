#pragma once
#include<stdio.h>

void show_digit(int n);

void show_digit(int n)
{
	if (n > 0)
	{
		show_digit(n / 10);
		printf("%d ", n % 10);
	}
}