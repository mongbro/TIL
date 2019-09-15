#pragma once
#include<stdio.h>

void is_leap(int year);

void is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d년은 366일 입니다.", year);
	else
		printf("%d년은 365일 입니다.", year);
}