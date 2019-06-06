#include<stdio.h>
int main()
{
	double r, result = 1;
	int n, d = 1;
	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &r);
	printf("거듭제곱횟수를 입력하시오 : ");
	scanf_s("%d", &n);

	for (; d <= n; d++)
		result *= r;

	printf("%.1lf의 %d제곱은 %lf입니다.", r, n, result);
	return 0;
}