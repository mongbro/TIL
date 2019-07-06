#include<stdio.h>
#include"area.h"
double cal_area(double r);
int main()
{
	double r, area;
	printf("원의 반지름을 입력하시오 : ");
	scanf_s("%lf", &r);
	area = cal_area(r);
	printf("원의 면적은 %lf입니다.", area);
	return 0;
}