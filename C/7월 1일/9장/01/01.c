#include<stdio.h>
#include"tmp.h"			//���� ���� �������

int fac(int n);
int main()
{
	int n;
	printf("n�� : ");
	scanf_s("%d", &n);
	printf("%d! = %d", n, fac(n));
	return 0;
}