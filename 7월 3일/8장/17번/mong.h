#pragma once
#include<stdio.h>

double f_abs(double a);
double f_min(double a, double b);
int f_equl(double a, double b);

double f_abs(double a)
{
	if (a >= 0)
		return a;
	else
		return -a;
}
double f_min(double a, double b)
{
	if (a > b)
		return b;
	else
		return a;
}
int f_equl(double a, double b)
{
	if (f_abs(a - b) / f_min(a, b) < 0.000001)
		return 1;
	else
		return 0;
}