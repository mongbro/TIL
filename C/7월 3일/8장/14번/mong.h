#pragma once
#include<stdio.h>
#include<math.h>

double get_dis(double x1, double y1, double x2, double y2);
double get_dis(double x1, double y1, double x2, double y2)
{
	double result;
	result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return result;
}