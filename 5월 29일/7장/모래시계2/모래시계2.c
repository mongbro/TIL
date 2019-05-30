#include<stdio.h>
int main()
{
	for (int i = 1; i <= 7; i++)
	{
		if (i < 5)
		{
			for (int j = 1; j < i; j++)
				printf(" ");
			for (int k = 5; k > i; k--)
				printf("*");
			for (int l = 4; l > i; l--)
				printf("*");
			printf("\n");
		}
		if (i >= 5)
		{
			for (int j = 7; j > i; j--)
				printf(" ");
			for (int k = 4; k <= i; k++)
				printf("*");
			for (int l = 4; l < i; l++)
				printf("*");
			printf("\n");
		}
		}
}