#include<stdio.h>
int main()
{
	int n, r, sum = 1;
	printf("n�� �� : ");
	scanf_s("%d", &n);
	printf("r�� �� : ");
	scanf_s("%d", &r);
	for (int i = n; i >= n - r - 1; i--)
	{
		sum *= i;
	}
	printf("������ ���� %d�Դϴ�.", sum);
	return 0;
}