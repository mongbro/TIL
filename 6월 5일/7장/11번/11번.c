#include<stdio.h>
int main()
{
	int n, sum = 0, mul;
	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		mul = i * i;
		sum += mul;
	}
	printf("��갪�� %d�Դϴ�.", sum);
	return 0;
}