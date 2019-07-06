#pragma once
#include<stdio.h>

void is_prime(int n);
void is_prime(int n)
{
	for (int i = 2; i <= n; i++)
	{
		int count = 0;
		for (int r=1;r<=i;r++)
		{
			if (i%r == 0)
				count++;
		}
		if (count == 2)
			printf("%d ", i);
	}
}