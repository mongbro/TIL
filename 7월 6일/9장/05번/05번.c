#include<stdio.h>
#include"mong.h"
int sum(int a);

int main()
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	printf("1부터 %d까지의 합 : %d", n, sum(n));
	return 0;
}