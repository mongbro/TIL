#include<stdio.h>
int main()
{
	int n, i;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	do
	{
		i = n % 10;
		n /= 10;
		printf("%d", i);
	} while (n > 0);
	return 0;
}