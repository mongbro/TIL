#include<stdio.h>
int main()
{
	double ang, dis, r;
	printf("�Ÿ� : ");
	scanf_s("%lf", &dis);
	printf("���� : ");
	scanf_s("%lf", &ang);
	r = 360 / ang * dis / 2 / 3.14;
	printf("������ = %lf", r);
	return 0;
}