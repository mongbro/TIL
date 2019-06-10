#include<stdio.h>
int main()
{
	int n, mul, sum = 0;
	printf("n의 값 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		mul = i * i;
		sum += mul;
	}
	printf("계산값은 %d입니다.", sum);
	return 0;
}