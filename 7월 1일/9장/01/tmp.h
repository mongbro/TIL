#pragma once
#include <stdio.h>

int fac(int n);
int fac(int n)
{
	if (n == 1)
		return 1;					//n이 1이 되면 결과값에 1을 곱하고 끝낸다.
	else
		return n * fac(n - 1);		//n과 n-1을 결과로 가지고 n이 1이 될때까지 반복
}