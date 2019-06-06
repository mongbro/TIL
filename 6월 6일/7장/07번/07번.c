#include<stdio.h>
int main()
{
	int n, j;
	for (int i = 2; i <= 100; i++)
	{
		n = 0;
		for (j = i; j > 0; j--)
		{
			if (i%j == 0)
				n++;
		}
		if (n == 2)
		{
			printf("%d ", i);
		}
	}
	return 0;
}