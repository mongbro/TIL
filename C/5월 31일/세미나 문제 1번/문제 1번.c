#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("���� ������ �Է��ϼ���(���� : -1) : ");
		scanf_s("%d", &n);

		for (int i = 1; i <= n; i++)
		{
			for (int j = n; j >= i; j--)
				printf("%d", j);
			printf("\n");
		}
	} while (n != -1);
	return 0;
}