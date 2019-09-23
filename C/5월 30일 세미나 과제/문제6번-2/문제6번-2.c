#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("입력하시오 : ");
		scanf_s("%d", &n);

		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j < i; j++)
				printf(" ");
			for (int k = i; k<i+n; k++)
				printf("%d", k%n);
			printf("\n");
		}
	} while (n != -1);
	return 0;
}