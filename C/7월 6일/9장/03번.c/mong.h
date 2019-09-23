#pragma once
#include<stdio.h>

int check(int n);


int check(int n)
{
	static int USER_PW = 1234;

	if (USER_PW == n)
		return 1;
	else
		return 0;
}