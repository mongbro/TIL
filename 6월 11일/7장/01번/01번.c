#include<stdio.h>
int main()
{
	int n;
	printf("카운터의 초기값을 입력하시오 : ");
	scanf_s("%d", &n);
	for (; n >= 1; n--)
		printf("%d ", n);
	return 0;
}