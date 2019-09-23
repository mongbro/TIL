#include<stdio.h>
int main()
{
	double r, result = 1;
	int n;
	printf("실수의 값을 입력하시오 : ");
	scanf_s("%lf", &r);
	printf("거듭제곱의 횟수를 입력하시오 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		result *= r;
	}
	printf("결과값 : %lf", result);
	return 0;
}