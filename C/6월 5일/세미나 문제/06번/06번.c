#include<stdio.h>
int main()
{
	int n, l;
	do
	{
		printf("입력값을 넣어주세요 : ");
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