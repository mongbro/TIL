#include<stdio.h>
int main()
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	printf("2의 보수 : %d", ~n + 1);
	return 0;
}