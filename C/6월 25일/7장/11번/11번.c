#include<stdio.h>
int main()
{
	int mul = 1, sum = 0, n;
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