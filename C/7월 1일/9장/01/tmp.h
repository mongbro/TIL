#pragma once
#include <stdio.h>

int fac(int n);
int fac(int n)
{
	if (n == 1)
		return 1;					//n�� 1�� �Ǹ� ������� 1�� ���ϰ� ������.
	else
		return n * fac(n - 1);		//n�� n-1�� ����� ������ n�� 1�� �ɶ����� �ݺ�
}