#include<stdio.h>
int main()
{
	double ang, dis, r;
	printf("거리 : ");
	scanf_s("%lf", &dis);
	printf("각도 : ");
	scanf_s("%lf", &ang);
	r = 360 / ang * dis / 2 / 3.14;
	printf("반지름 = %lf", r);
	return 0;
}