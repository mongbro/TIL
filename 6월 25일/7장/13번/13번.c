#include<stdio.h>
int main()
{
	int n, r, result = 1;
	printf("n�� �� : ");
	scanf_s("%d", &n);
	printf("r�� �� : ");
	scanf_s("%d", &r);
	for (int i = n; i >= n - r - 1; i--)
	{
		result *= i;
	}
	printf("������ ���� %d�Դϴ�.", result);
	return 0;
}