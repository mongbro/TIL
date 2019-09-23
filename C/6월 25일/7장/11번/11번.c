#include<stdio.h>
int main()
{
	int mul = 1, sum = 0, n;
	printf("n의 값을 입력하시오 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		mul = i * i;
		sum += mul;
	}
	printf("계산값은 %d입니다.", sum);
	return 0;
}