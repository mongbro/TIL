#include<stdio.h>
int main()
{
	double stick_s, stick_h, pira_s, pira_h;
	printf("지팡이 높이 : ");
	scanf_s("%lf", &stick_h);
	printf("지팡이 그림자 : ");
	scanf_s("%lf", &stick_s);
	printf("피라미드 그림자 : ");
	scanf_s("%lf", &pira_s);
	pira_h = pira_s * stick_h / stick_s;
	printf("피라미드 높이 : %lf", pira_h);
	return 0;
}