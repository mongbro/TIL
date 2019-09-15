#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("별의 갯수를 입력하시오(종료 : -1) : ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
				printf("*");
			printf("\n");
		}
	} while (n != -1);
	return 0;
}