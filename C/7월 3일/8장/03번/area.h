#pragma once
#include<stdio.h>
#define PIE 3.141592
double cal_area(double r);

double cal_area(double r)
{
	double area;
	area = PIE * r*r;
	return area;
}