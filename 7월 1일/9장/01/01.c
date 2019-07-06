#include<stdio.h>
#include"tmp.h"			//내가 만든 헤더파일

int fac(int n);
int main()
{
	int n;
	printf("n값 : ");
	scanf_s("%d", &n);
	printf("%d! = %d", n, fac(n));
	return 0;
}