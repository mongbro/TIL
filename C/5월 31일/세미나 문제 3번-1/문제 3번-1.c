#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("별의 갯수를 입력하세요(종료 : -1) : ");
		scanf_s("%d", &n);
		for (int i = 0; i <= n; i++)
		{
			for (int j = n; j > i; j--)
				printf(" ");
			for (int k = 0; k <= i * 2; k++)
			{
				printf("%d", k);
			}
			printf("\n");
		}
	} while (n != -1);
	return 0;
}