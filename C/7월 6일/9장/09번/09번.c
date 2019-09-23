#include<stdio.h>
#include"mong.h"
int f_sum(int n);

int main()
{
	int n;
	printf("입력 : ");
	scanf_s("%d", &n);
	printf("출력 : %d", f_sum(n));
	return 0;
}