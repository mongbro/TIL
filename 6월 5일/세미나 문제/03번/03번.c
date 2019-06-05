#include<stdio.h>
int main()
{
	int n, l;
	do
	{
		printf("입력값을 넣어주세요(종료 : -1) : ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			for (int j = n; j > i; j--)
				printf(" ");
			for (int k = 0; k < 2 * i - 1; k++)
			{
				l = k - i + 1;
				if (l >= 0)
					printf("%d", l + 1);
				else
					printf("%d", -l + 1);
			}
			printf("\n");
		}
	} while (n != -1);
	return 0;
}