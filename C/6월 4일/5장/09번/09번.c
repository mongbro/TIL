#include<stdio.h>
int main()
{
	double stick_L, stick_S, pira_H, pira_S;
	printf("지팡이의 높이를 입력하시오 : ");
	scanf_s("%lf", &stick_L);
	printf("지팡이의 그림자의 길이를 입력하시오 : ");
	scanf_s("%lf", &stick_S);
	printf("피라미드까지의 거리를 입력하시오 : ");
	scanf_s("%lf", &pira_S);

	pira_H = pira_S * stick_L / stick_S;

	printf("피라미드의 높이는 %lf입니다.", pira_H);
	return 0;
}