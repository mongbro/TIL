#pragma once
#include<stdio.h>

int check_alpha(char a);

int check_alpha(char a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return 1;
	else
		return 0;
}