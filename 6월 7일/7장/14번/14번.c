#include<stdio.h>
int main()
{
	int n, i;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	while (n > 0)
	{
		i = n % 10;
		printf("%d", i);
		n /= 10;
	}
	return 0;
}