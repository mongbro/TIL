#include<stdio.h>
int main()
{
	int x, y, p;
	scanf_s("%d%d", &x, &y);
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			p = j * i;
			printf("%d ", p);
		}
		printf("\n");
	}
	return 0;
}