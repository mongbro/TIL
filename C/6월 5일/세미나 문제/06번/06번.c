#include<stdio.h>
int main()
{
	int n, l;
	do
	{
		printf("�Է°��� �־��ּ��� : ");
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
				printf(" ");
			for (int k = i;k<=n+i; k++)
			{
				l = k % n;
				printf("%d", l);
			}
			printf("\n");
		}
	} while (n != -1);
	return 0;
}