#pragma once
#include<stdio.h>
int round(double n);
int round(double n)
{
	n += 0.5;
	return n;
}