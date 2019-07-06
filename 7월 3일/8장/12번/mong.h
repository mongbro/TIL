#pragma once
#include<stdio.h>

void print_value(int n);
void print_value(int n)
{
	for (int a = 1; a <= n; a++)
	{
		printf("*");
	}
}