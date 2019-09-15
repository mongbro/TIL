#include<stdio.h>
#include"mong.h"
int is_multiply(int a, int b);
int main()
{
	int x, y, result;
	printf("첫번째 정수를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("두번째 정수를 입력하시오 : ");
	scanf_s("%d", &y);
	result = is_multiply(x, y);
	if (result == 1)
		printf("%d는 %d의 배수입니다.", x, y);
	else
		printf("%d는 %d의 배수가 아닙니다.", x, y);
	return 0;
}