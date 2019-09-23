#include<stdio.h>
int main()
{
	int d, n, result;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &d);
	printf("2를 곱하고 싶은 횟수를 입력하시오 : ");
	scanf_s("%d", &n);
	result = d << n;
	printf("%d<<%d의 값 : %d", d, n, result);
	return 0;
}