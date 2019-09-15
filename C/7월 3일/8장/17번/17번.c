#include<stdio.h>
#include"mong.h"
int f_equl(double a, double b);

int main()
{
	double a, b;
	int result;
	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &a);
	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &b);
	result = f_equl(a, b);
	if (result == 1)
		printf("두 개의 실수는 서로 같음");
	else
		printf("두 개의 실수는 서로 다름");
	return 0;
}