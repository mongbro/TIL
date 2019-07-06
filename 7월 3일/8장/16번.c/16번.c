#include<stdio.h>
#include"mong.h"
double factorial(long long n);			//factorial 구하는 함수
double euler(long long n);					//오일러 구하는 함수
int main()
{
	long long n;
	printf("어디까지 계산할까요?");
	scanf_s("%I64d", &n);
	printf("오일러의 수는 %lf입니다.", euler(n));

	return 0;
}