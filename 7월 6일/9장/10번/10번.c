#include<stdio.h>
#include"mong.h"
double sum(double r);

int main()
{
	double r;
	printf("입력 : ");
	scanf_s("%lf", &r);
	printf("출력 : %lf", sum(r));
	return 0;
}