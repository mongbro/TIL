#include<stdio.h>
int main()
{
	double sti, s_sti, dis, hight;
	printf("지팡이의 높이를 입력하시오 : ");
	scanf_s("%lf", &sti);
	printf("지팡이의 그림자의 길이를 입력하시오 : ");
	scanf_s("%lf", &s_sti);
	printf("피라미드까지의 거리를 입력하시오 : ");
	scanf_s("%lf", &dis);

	hight = dis * sti / s_sti;

	printf("피라미드의 높이는 %lf입니다.", hight);
	return 0;
}