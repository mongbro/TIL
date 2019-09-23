#include<stdio.h>
int main()
{
	double sti_s, sti_h, pira_s, pira_h;			//sti_s = 지팡이 그림자 길이, sti_h = 지팡이 길이, pira_s = 피라미드 그림자 길이(피라미드까지의 거리), pira_h = 피라미드의 높이
	printf("지팡이의 높이를 입력하시오 : ");
	scanf_s("%lf", &sti_h);
	printf("지팡이의 높이를 입력하시오 : ");
	scanf_s("%lf", &sti_s);
	printf("지팡이의 높이를 입력하시오 : ");
	scanf_s("%lf", &pira_s);
	pira_h = pira_s * sti_h / sti_s;
	printf("피라미드의 높이는 %lf입니다.", pira_h);
	return 0;
}