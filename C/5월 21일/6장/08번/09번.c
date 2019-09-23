/*함수 계산*/

#include<stdio.h>
int main()
{
	double x, result;
	printf("x의 값을 입력하시오 : ");
	scanf_s("%lf", &x);

	if (x > 0)
		result = 7 * x + 2;
	else
		result = x * x - 9 * x + 2;

	printf("f(x)의 값은 %lf입니다.", result);
	return 0;
}