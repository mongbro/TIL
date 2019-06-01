#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("별의 갯수를 입력하세요(종료 : -1) : ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			if (2 * i - 1 <= n)
			{
			for (int j = 1; j < i; j++)
				printf(" ");
				for (int k = n; k >= 2 * i - 1; k--)
					printf("*");
			}
			else if (2 * i - 1 > n)
			{
				for (int j = n; j > i; j--)
					printf(" ");
				for (int k = 1; k <= 2*i-n; k++)
					printf("*");
			}
				printf("\n");
		}
	} while (n != -1);
	return 0;
}