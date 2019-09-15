#include<stdio.h>
int main()
{
	double x, y;
	printf("실수를 입력하시오 : ");
	scanf_s("%lf%lf", &x, &y);
	printf("%lf   %lf   %lf   %lf", x + y, x - y, x*y, x / y);
	return 0;
}