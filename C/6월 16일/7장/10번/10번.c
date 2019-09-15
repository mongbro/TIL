#include<stdio.h>
int main()
{
	double r, result = 1;
	int n;
	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &r);
	printf("거듭제곱의 횟수를 입력하시오 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)				//i가 1부터 n이 될때까지의 횟수만큼 r을 반복해서 곱한다.
	{
		result *= r;
	}
	printf("결과값은 %lf입니다.", result);
	return 0;
}