#pragma once
#include<stdio.h>

void is_leap(int year);

void is_leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d���� 366�� �Դϴ�.", year);
	else
		printf("%d���� 365�� �Դϴ�.", year);
}