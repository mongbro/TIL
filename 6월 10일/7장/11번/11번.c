#include<stdio.h>
int main()
{
	int n, mul, sum = 0;
	printf("n�� �� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		mul = i * i;
		sum += mul;
	}
	printf("��갪�� %d�Դϴ�.", sum);
	return 0;
}