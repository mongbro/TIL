#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int get_random();
int get_random()
{
	static int count = 0;
	int n;
	if (count == 0)
	{
		count = 1;
		srand((unsigned)time(NULL));
		return printf("�ʱ�ȭ ����\n"), n = rand();
	}
	else
		return n = rand();
}