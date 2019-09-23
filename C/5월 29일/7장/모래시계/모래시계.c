#include<stdio.h>
int main()
{
	int d;
	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &d);

	for (int i = 1; i <= (d / 2) + 1; i++)
	{
		for (int j = 1; j < i; j++)
			printf(" ");
		for (int k = (d / 2) + 1; k >= i; k--)
			printf("*");
		for (int l = (d / 2) + 1; l > i; l--)
			printf("*");
		printf("\n");
	}
	for (int i = 1; i <= (d / 2) + 1; i++)
	{
		for (int j = (d / 2) + 1; j > i; j--)
			printf(" ");
		for (int k = 1; k <= i; k++)
			printf("*");
		for (int l = 1; l < i; l++)
			printf("*");
		printf("\n");
	}
}