#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("���� ������ �Է��Ͻÿ� : ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			for (int j = n; j > i; j--)
				printf(" ");
			for (int k = 1; k <= i; k++)
				printf("*");
			printf("\n");
		}
	} while (n != -1);
	return 0;
}