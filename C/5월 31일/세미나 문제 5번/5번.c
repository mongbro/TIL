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
			for (int j = 1; j < i; j++)
				printf(" ");
			for (int k = i; k<n+i; k++)
			{
				printf("%d", k%n);
			}
			printf("\n");
		}
	} while (n != -1);
	return 0;
}