#include<stdio.h>
int main()
{
	double input;
	printf("실수를 입력하시오 : ");
	scanf("%lf", &input);
	printf("실수형식으로는 %lf입니다.\n", input);
	printf("지수형식으로는 %e입니다.", input);
	return 0;
}