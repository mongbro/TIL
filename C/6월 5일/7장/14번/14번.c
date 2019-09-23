#include<stdio.h>
int main()
{
	int n, r;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	do
	{
		r = n % 10;
		printf("%d", r);
		n /= 10;
	} while (n > 0);
	return 0;
}