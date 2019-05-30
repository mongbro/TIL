#include<stdio.h>
int main()
{
	int i, j, n = 0;

	for (i = 1; i <= 100; i++)
	{
		j = i;

		while (j >= 0)
		{
			if (i%j == 0)
			{
				n++;
				printf("%d", n);
			}
			j--;
		}
		printf("%d", n);
	}
	return 0;
}