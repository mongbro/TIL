#include<stdio.h>
int main()
{
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 7; j > i; j--)
			printf(" ");
		for (int k = 1; k <= i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}