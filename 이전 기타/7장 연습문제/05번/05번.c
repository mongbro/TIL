#include<stdio.h>
int main()
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}