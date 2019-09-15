#include<stdio.h>
int main()
{
	double stick_h, stick_s, pira_h, pira_s;
	printf("지팡이의 높이를 입력하시오 : ");
	scanf_s("%lf", &stick_h);
	printf("지팡이의 그림자의 길이를 입력하시오 : ");
	scanf_s("%lf", &stick_s);
	printf("피라미드까지의 그림자의 길이를 입력하시오 : ");
	scanf_s("%lf", &pira_s);
	pira_h = pira_s * stick_h / stick_s;
	printf("피라미드의 높이는 %lf입니다.", pira_h);
	return 0;
}