#include<stdio.h>
#include"square.h"			//square의 정의가 들어있는 헤더파일

double square(double n);	//실수 n을 제곱하는 함수

int main()
{
	double n, result;
	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &n);
	result = square(n);
	printf("주어진 정수 %lf의 제곱은 %lf입니다.", n, result);
	return 0;
}