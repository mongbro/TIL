#include<stdio.h>
#include"area.h"
double cal_area(double r);
int main()
{
	double r, area;
	printf("���� �������� �Է��Ͻÿ� : ");
	scanf_s("%lf", &r);
	area = cal_area(r);
	printf("���� ������ %lf�Դϴ�.", area);
	return 0;
}