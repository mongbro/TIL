#include<stdio.h>
#include"mong.h"
double sum(double r);

int main()
{
	double r;
	printf("�Է� : ");
	scanf_s("%lf", &r);
	printf("��� : %lf", sum(r));
	return 0;
}