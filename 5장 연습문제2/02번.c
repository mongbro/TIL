#include<stdio.h>
int main()
{
	double x, y;
	printf("2개의 실수를 입력하시오 : ");
	scanf_s("%lf %lf", &x, &y);

	printf("합 : %lf  차 : %lf  곱 : %lf  몫 : %lf", x + y, x - y, x*y, x / y);
	return 0;
}