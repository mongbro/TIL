/*지수표기법을 사용하여 계산하는 프로그램*/
#include<stdio.h>
void main()
{
	double x, y, sum;

	x = 3.32e-3;
	y = 9.76e-8;
	sum = x + y;

	printf("%lf", sum);
	return 0;

}