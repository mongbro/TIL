#pragma once
#include<stdio.h>

int sum(int a);
int sum(int a)
{
	if (a == 1)
		return 1;
	else
		return a + sum(a - 1);
}