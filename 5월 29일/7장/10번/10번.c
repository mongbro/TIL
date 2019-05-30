#include<stdio.h>
int main()
{
	double r, result = 1;						//r은 사용자가 입력하는 실수, result는 제곱한 결과값
	int n, m = 1;								//n은 사용자가 입력하는 횟수, m은 result에 r을 몇번 곱할것인지 정하는 변수

	printf("실수의 값을 입력하시오 : ");
	scanf_s("%lf", &r);
	printf("거듭제곱의 횟수를 입력하시오 : ");
	scanf_s("%d", &n);

	for (; m <= n; m++)							//m이 1일때부터 n이 될때까지 result에 r를 곱한다.
	{
		result *= r;
	}

	printf("결과값은 %lf", result);
	return 0;
}