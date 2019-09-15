#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("막대의 높이(종료=-1) : ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++)
			printf("*");
		printf("\n");
	} while (n != -1);
	return 0;
}