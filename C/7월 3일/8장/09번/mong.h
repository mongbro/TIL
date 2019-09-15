#pragma once
#include<stdio.h>
#include<stdlib.h>

int b_rand();
int b_rand()
{
	int a;
	a = rand() % 2;
	return a;
}