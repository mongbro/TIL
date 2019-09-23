#include<stdio.h>
#include"mong.h"
int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	printf("even()의 결과 : ");
	if (even(n) == 1)
		printf("짝수\n");
	else
		printf("홀수\n");
	printf("absolute()의 결과 : %d\n", absolute(n));
	printf("sign()의 결과 : ");
	if (sign(n) == 1)
		printf("양수");
	if (sign(n) == 0)
		printf("0");
	if (sign(n) == -1)
		printf("음수");
	return 0;
}