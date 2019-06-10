#include<stdio.h>
int main()
{
	int n, r;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	printf("2를 곱하고 싶은 횟수 : ");
	scanf_s("%d", &r);
	printf("%d<<%d의 값 : %d", n, r, n << r);
	return 0;
}