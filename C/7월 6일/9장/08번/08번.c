#include<stdio.h>
#include"mong.h"
int f_count(int n);

int main()
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	printf("자리수의 개수 : %d", f_count(n));
	return 0;
}