#include<stdio.h>
#include"round.h"

int round(double n);

int main()
{
	double r;
	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &r);
	printf("반올림한 값은 %d입니다.", round(r));
	return 0;
}