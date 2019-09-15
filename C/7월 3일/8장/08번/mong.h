#pragma once
#include<stdio.h>
#include<math.h>
#define PIE 3.141592

double sin_degree(double r);
double sin_degree(double r)
{
	double radian;
	radian = PIE * r / 180.0;

	return sin(radian);
}