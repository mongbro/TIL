#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
double f_rand();
double f_rand()
{
	double r;
	r = rand()/(double)RAND_MAX;
	return r;
}