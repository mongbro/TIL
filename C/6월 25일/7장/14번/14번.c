#include<stdio.h>
int main()
{
	int n, result;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	while (n > 0)
	{
		result = n % 10;
		printf("%d", result);
		n /= 10;
	}
	return 0;
}