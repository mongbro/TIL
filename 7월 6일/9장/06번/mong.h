#pragma once
#include<stdio.h>

int power(int base, int raise);
int power(int base, int raise)
{
	if (raise == 1)
		return base;
	else
		return base * power(base, raise - 1);
}