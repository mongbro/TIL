#include<stdio.h>
int main()
{
	int x;
	do
	{
		printf("������ ����(���� : -1) : ");
		scanf_s("%d", &x);
		for (int i = 1; i <= x; i++)
			printf("*");
		printf("\n");
	} while (x != -1);
	return 0;
}