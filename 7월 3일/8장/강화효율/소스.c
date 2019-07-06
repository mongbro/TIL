#include<stdio.h>

int main()
{
	int x, y;				//x = reinforcement_standerd, y = reinforcement_breath
	int a, b;				//a = money_standerd, b = money_breath
	double  expected_standerd, expected_breath;

	printf("강화 확률을 입력하시오(기본, 숨결추가) : ");
	scanf_s("%d%d", &x, &y);

	printf("강화 비용을 입력하시오(기본, 숨결추가) : ");
	scanf_s("%d%d", &a, &b);
	expected_standerd = y / 0.01 / x;
	expected_breath = (y + b) / 0.01 / (x + a);
	printf("기본 강화 기댓값 : %lf\n", expected_standerd);
	printf("숨결 강화 기댓값 : %lf\n", expected_breath);

	if (expected_breath < expected_standerd)
		printf("숨결 추가한게 이득");
	else if (expected_breath == expected_standerd)
		printf("같은 효율");
	else
		printf("추가 안한게 이득");

}